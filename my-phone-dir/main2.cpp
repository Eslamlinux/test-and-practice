#include <ncursesw/ncurses.h>  // استخدم ncursesw للـ UTF-8
#include <wchar.h>             // للـ wide characters
#include <wctype.h>            // للتحقق من الأحرف
#include <locale.h>            // لإعداد اللغة
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
#include <sstream>             // لتحليل السطور

struct Contact {
    std::string name, phone, email;  // استخدم string عادي للبساطة، لكن عرض wide
};

std::vector<Contact> contacts;

// إعداد الـ locale للعربية (في main)
void setupLocale() {
    setlocale(LC_ALL, "ar_EG.UTF-8");  // أو "en_US.UTF-8" إذا لم يعمل
}

// دوال المساعدة (تحميل/حفظ مع دعم UTF-8)
void saveContacts() {
    std::ofstream file("phone_directory_data.txt", std::ios::binary);  // للحفاظ على UTF-8
    if (file.is_open()) {
        for (const auto& c : contacts) {
            file << c.name << "|" << c.phone << "|" << c.email << "\n";
        }
        file.close();
    }
}

void loadContacts() {
    std::ifstream file("phone_directory_data.txt");
    std::string line;
    contacts.clear();
    if (file.is_open()) {
        while (std::getline(file, line)) {
            size_t pos1 = line.find('|');
            size_t pos2 = line.rfind('|');
            if (pos1 != std::string::npos && pos2 != std::string::npos && pos2 > pos1) {
                Contact c;
                c.name = line.substr(0, pos1);
                c.phone = line.substr(pos1 + 1, pos2 - pos1 - 1);
                c.email = line.substr(pos2 + 1);
                contacts.push_back(c);
            }
        }
        file.close();
    }
    // ترتيب أبجدي (غير حساس للحروف الكبيرة/الصغيرة)
    std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
        std::string al = a.name, bl = b.name;
        std::transform(al.begin(), al.end(), al.begin(), ::tolower);
        std::transform(bl.begin(), bl.end(), bl.begin(), ::tolower);
        return al < bl;
    });
}

// إضافة جهة اتصال (مع دعم إدخال عربي)
void addContact() {
    werase(stdscr);  // مسح الشاشة
    wrefresh(stdscr);
    
    Contact c;
    mvwprintw(stdscr, 2, 2, "ادخل الاسم: ");
    echo(); 
    wchar_t wname[256]; 
    get_wstr(wname);  // استخدم get_wstr للـ wide input
    c.name = std::string(wname);  // تحويل إلى string
    noecho();
    
    mvwprintw(stdscr, 4, 2, "ادخل الهاتف: ");
    echo();
    wchar_t wphone[256];
    get_wstr(wphone);
    c.phone = std::string(wphone);
    noecho();
    
    mvwprintw(stdscr, 6, 2, "ادخل الإيميل: ");
    echo();
    wchar_t wemail[256];
    get_wstr(wemail);
    c.email = std::string(wemail);
    noecho();
    
    if (!c.name.empty() && !c.phone.empty()) {
        contacts.push_back(c);
        saveContacts();
        mvwprintw(stdscr, 8, 2, "تم الإضافة بنجاح! اضغط أي مفتاح...");
        wrefresh(stdscr);
        get_wch(NULL);  // انتظار wide char
    } else {
        mvwprintw(stdscr, 8, 2, "خطأ: الحقول مطلوبة! اضغط أي مفتاح...");
        wrefresh(stdscr);
        get_wch(NULL);
    }
}

// عرض جميع الجهات (مع عرض عربي)
void viewContacts() {
    werase(stdscr);
    mvwprintw(stdscr, 1, 2, "قائمة الجهات (مرتبة أبجدياً):");
    wrefresh(stdscr);
    
    for (size_t i = 0; i < contacts.size() && i < 20; ++i) {  // حد للشاشة
        std::wstring wline = L"";
        wline += std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(std::to_string(i+1) + ". " + contacts[i].name + " - " + contacts[i].phone + " - " + contacts[i].email);
        mvwaddwstr(stdscr, 3 + i, 2, wline.c_str());
    }
    if (contacts.empty()) mvwprintw(stdscr, 3, 2, "لا توجد جهات.");
    mvwprintw(stdscr, contacts.size() + 4, 2, "اضغط أي مفتاح للعودة...");
    wrefresh(stdscr);
    get_wch(NULL);
}

// تعديل جهة اتصال (بحث بالاسم)
void modifyContact() {
    werase(stdscr);
    std::string search;
    mvwprintw(stdscr, 2, 2, "ادخل اسم الجهة للتعديل: ");
    wrefresh(stdscr);
    echo();
    wchar_t wsearch[256];
    get_wstr(wsearch);
    search = std::string(wsearch);
    noecho();
    
    bool found = false;
    for (auto& c : contacts) {
        if (c.name.find(search) != std::string::npos) {
            found = true;
            mvwprintw(stdscr, 4, 2, "الاسم الجديد: ");
            wrefresh(stdscr);
            echo();
            wchar_t wnew[256];
            get_wstr(wnew);
            c.name = std::string(wnew);
            noecho();
            
            mvwprintw(stdscr, 6, 2, "الهاتف الجديد: ");
            wrefresh(stdscr);
            echo();
            get_wstr(wnew);
            c.phone = std::string(wnew);
            noecho();
            
            mvwprintw(stdscr, 8, 2, "الإيميل الجديد: ");
            wrefresh(stdscr);
            echo();
            get_wstr(wnew);
            c.email = std::string(wnew);
            noecho();
            
            saveContacts();
            mvwprintw(stdscr, 10, 2, "تم التعديل! اضغط أي مفتاح...");
            wrefresh(stdscr);
            get_wch(NULL);
            return;
        }
    }
    if (!found) {
        mvwprintw(stdscr, 4, 2, "لم يتم العثور! اضغط أي مفتاح...");
        wrefresh(stdscr);
        get_wch(NULL);
    }
}

// حذف جهة اتصال
void deleteContact() {
    werase(stdscr);
    std::string search;
    mvwprintw(stdscr, 2, 2, "ادخل اسم الجهة لحذفها: ");
    wrefresh(stdscr);
    echo();
    wchar_t wsearch[256];
    get_wstr(wsearch);
    search = std::string(wsearch);
    noecho();
    
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name.find(search) != std::string::npos) {
            contacts.erase(it);
            saveContacts();
            mvwprintw(stdscr, 4, 2, "تم الحذف! اضغط أي مفتاح...");
            wrefresh(stdscr);
            get_wch(NULL);
            return;
        }
    }
    mvwprintw(stdscr, 4, 2, "لم يتم العثور! اضغط أي مفتاح...");
    wrefresh(stdscr);
    get_wch(NULL);
}

// بحث في الجهات (غير حساس لحالة الحروف)
void searchContacts() {
    werase(stdscr);
    std::string query;
    mvwprintw(stdscr, 2, 2, "ادخل كلمة البحث: ");
    wrefresh(stdscr);
    echo();
    wchar_t wquery[256];
    get_wstr(wquery);
    query = std::string(wquery);
    noecho();
    
    bool found = false;
    mvwprintw(stdscr, 4, 2, "نتائج البحث:");
    wrefresh(stdscr);
    for (size_t i = 0; i < contacts.size(); ++i) {
        std::string full = contacts[i].name + " " + contacts[i].phone + " " + contacts[i].email;
        std::transform(full.begin(), full.end(), full.begin(), ::tolower);
        std::transform(query.begin(), query.end(), query.begin(), ::tolower);
        if (full.find(query) != std::string::npos) {
            mvwprintw(stdscr, 5 + i, 2, "%s - %s - %s", contacts[i].name.c_str(), contacts[i].phone.c_str(), contacts[i].email.c_str());
            found = true;
        }
    }
    if (!found) mvwprintw(stdscr, 5, 2, "لا نتائج.");
    mvwprintw(stdscr, contacts.size() + 6, 2, "اضغط أي مفتاح...");
    wrefresh(stdscr);
    get_wch(NULL);
}

// تصدير إلى ملف خارجي
void exportContacts() {
    std::ofstream file("exported_contacts.txt");
    if (file.is_open()) {
        for (const auto& c : contacts) {
            file << c.name << " | " << c.phone << " | " << c.email << "\n";
        }
        file.close();
        werase(stdscr);
        mvwprintw(stdscr, 2, 2, "تم التصدير إلى exported_contacts.txt! اضغط أي مفتاح...");
        wrefresh(stdscr);
        get_wch(NULL);
    }
}

// مسح جميع البيانات
void clearAllContacts() {
    werase(stdscr);
    mvwprintw(stdscr, 2, 2, "هل أنت متأكد؟ (y/n): ");
    wrefresh(stdscr);
    char choice = getch();  // بسيط لـ y/n
    if (choice == 'y' || choice == 'Y') {
        contacts.clear();
        saveContacts();
        mvwprintw(stdscr, 4, 2, "تم مسح الكل! اضغط أي مفتاح...");
        wrefresh(stdscr);
        get_wch(NULL);
    } else {
        mvwprintw(stdscr, 4, 2, "تم الإلغاء! اضغط أي مفتاح...");
        wrefresh(stdscr);
        get_wch(NULL);
    }
}

// القائمة الرئيسية التفاعلية (بالأسهم + ألوان)
int mainMenu() {
    const char* options[] = {
        "1. إضافة جهة اتصال",
        "2. عرض جميع الجهات",
        "3. تعديل جهة اتصال",
        "4. حذف جهة اتصال",
        "5. بحث في الجهات",
        "6. تصدير إلى ملف",
        "7. مسح جميع البيانات",
        "8. خروج"
    };
    int n_options = 8;
    int highlight = 0;
    int choice = 0;

    while (true) {
        werase(stdscr);
        mvwprintw(stdscr, 0, 0, "=== دليل الهواتف - ncurses Edition ===");
        std::string count_str = "(عدد الجهات: " + std::to_string(contacts.size()) + ")";
        mvwprintw(stdscr, 0, 30, "%s", count_str.c_str());
        
        for (int i = 0; i < n_options; ++i) {
            if (i == highlight) {
                wattron(stdscr, A_REVERSE | COLOR_PAIR(1));  // تمييز
            }
            mvwprintw(stdscr, 2 + i, 5, "%s", options[i]);
            if (i == highlight) wattroff(stdscr, A_REVERSE | COLOR_PAIR(1));
        }
        wrefresh(stdscr);
        
        choice = getch();
        switch (choice) {
            case KEY_UP:
                highlight = (highlight == 0) ? n_options - 1 : highlight - 1;
                break;
            case KEY_DOWN:
                highlight = (highlight == n_options - 1) ? 0 : highlight + 1;
                break;
            case 10:  // Enter
                return highlight + 1;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");  // إعداد locale عام
    
    initscr();              // بدء ncursesw
    start_color();          // تفعيل الألوان
    init_pair(1, COLOR_YELLOW, COLOR_BLUE);  // زوج ألوان للتمييز
    cbreak();               // عدم انتظار Enter
    noecho();               // إخفاء الإدخال
    keypad(stdscr, TRUE);   // تفعيل الأسهم
    curs_set(0);            // إخفاء المؤشر

    loadContacts();         // تحميل البيانات

    int selected;
    while (true) {
        selected = mainMenu();
        switch (selected) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: modifyContact(); break;
            case 4: deleteContact(); break;
            case 5: searchContacts(); break;
            case 6: exportContacts(); break;
            case 7: clearAllContacts(); break;
            case 8: goto end_program;
        }
    }

end_program:
    saveContacts();         // حفظ نهائي
    endwin();               // إنهاء ncurses
    return 0;
}
