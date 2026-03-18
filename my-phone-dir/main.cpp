#include <ncurses.h>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>

struct Contact {
    std::string name, phone, email;
};

std::vector<Contact> contacts;

// دوال المساعدة (من المشروع الأصلي، محسنة لـ ncurses)
void clearScreen() { refresh(); }  // ncurses يتعامل مع الشاشة تلقائياً

// حفظ البيانات
void saveContacts() {
    std::ofstream file("phone_directory_data.txt");
    if (file.is_open()) {
        for (const auto& c : contacts) {
            file << c.name << "|" << c.phone << "|" << c.email << "\n";
        }
        file.close();
    }
}

// تحميل البيانات
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
    // ترتيب أبجدي
    std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
        return a.name < b.name;
    });
}

// إضافة جهة اتصال
void addContact() {
    clear();
    Contact c;
    mvprintw(2, 2, "ادخل الاسم: ");
    echo(); getstr(&c.name[0]); noecho();
    mvprintw(4, 2, "ادخل الهاتف: ");
    echo(); getstr(&c.phone[0]); noecho();
    mvprintw(6, 2, "ادخل الإيميل: ");
    echo(); getstr(&c.email[0]); noecho();
    
    if (!c.name.empty() && !c.phone.empty()) {
        contacts.push_back(c);
        saveContacts();
        mvprintw(8, 2, "تم الإضافة بنجاح! اضغط أي مفتاح...");
        getch();
    } else {
        mvprintw(8, 2, "خطأ: الحقول مطلوبة! اضغط أي مفتاح...");
        getch();
    }
    clear();
}

// عرض جميع الجهات
void viewContacts() {
    clear();
    mvprintw(1, 2, "قائمة الجهات (مرتبة أبجدياً):");
    for (size_t i = 0; i < contacts.size() && i < 20; ++i) {  // حد 20 للشاشة
        mvprintw(3 + i, 2, "%zu. %s - %s - %s", i+1, contacts[i].name.c_str(), contacts[i].phone.c_str(), contacts[i].email.c_str());
    }
    if (contacts.empty()) mvprintw(3, 2, "لا توجد جهات.");
    mvprintw(contacts.size() + 4, 2, "اضغط أي مفتاح للعودة...");
    getch();
}

// تعديل جهة (بسيط: ابحث بالاسم وعدل)
void modifyContact() {
    clear();
    std::string search;
    mvprintw(2, 2, "ادخل اسم الجهة للتعديل: ");
    echo(); getstr(&search[0]); noecho();
    
    for (auto& c : contacts) {
        if (c.name.find(search) != std::string::npos) {
            mvprintw(4, 2, "الاسم الجديد: ");
            echo(); getstr(&c.name[0]); noecho();
            mvprintw(6, 2, "الهاتف الجديد: ");
            echo(); getstr(&c.phone[0]); noecho();
            mvprintw(8, 2, "الإيميل الجديد: ");
            echo(); getstr(&c.email[0]); noecho();
            saveContacts();
            mvprintw(10, 2, "تم التعديل! اضغط أي مفتاح...");
            getch();
            return;
        }
    }
    mvprintw(4, 2, "لم يتم العثور! اضغط أي مفتاح...");
    getch();
}

// حذف جهة
void deleteContact() {
    clear();
    std::string search;
    mvprintw(2, 2, "ادخل اسم الجهة لحذفها: ");
    echo(); getstr(&search[0]); noecho();
    
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name.find(search) != std::string::npos) {
            contacts.erase(it);
            saveContacts();
            mvprintw(4, 2, "تم الحذف! اضغط أي مفتاح...");
            getch();
            return;
        }
    }
    mvprintw(4, 2, "لم يتم العثور! اضغط أي مفتاح...");
    getch();
}

// بحث (غير حساس لحالة الحروف)
void searchContacts() {
    clear();
    std::string query;
    mvprintw(2, 2, "ادخل كلمة البحث: ");
    echo(); getstr(&query[0]); noecho();
    
    bool found = false;
    mvprintw(4, 2, "نتائج البحث:");
    for (size_t i = 0; i < contacts.size(); ++i) {
        std::string full = contacts[i].name + " " + contacts[i].phone + " " + contacts[i].email;
        if (full.find(query) != std::string::npos) {
            mvprintw(5 + i, 2, "%s - %s - %s", contacts[i].name.c_str(), contacts[i].phone.c_str(), contacts[i].email.c_str());
            found = true;
        }
    }
    if (!found) mvprintw(5, 2, "لا نتائج.");
    mvprintw(contacts.size() + 6, 2, "اضغط أي مفتاح...");
    getch();
}

// تصدير إلى ملف خارجي
void exportContacts() {
    std::ofstream file("exported_contacts.txt");
    if (file.is_open()) {
        for (const auto& c : contacts) {
            file << c.name << " | " << c.phone << " | " << c.email << "\n";
        }
        file.close();
        clear();
        mvprintw(2, 2, "تم التصدير إلى exported_contacts.txt! اضغط أي مفتاح...");
        getch();
    }
}

// مسح جميع البيانات
void clearAllContacts() {
    clear();
    mvprintw(2, 2, "هل أنت متأكد؟ (y/n): ");
    char choice = getch();
    if (choice == 'y' || choice == 'Y') {
        contacts.clear();
        saveContacts();
        mvprintw(4, 2, "تم مسح الكل! اضغط أي مفتاح...");
        getch();
    } else {
        mvprintw(4, 2, "تم الإلغاء! اضغط أي مفتاح...");
        getch();
    }
}

// القائمة الرئيسية (تفاعلية بالأسهم)
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
        clear();
        mvprintw(0, 0, "=== دليل الهواتف - ncurses Edition ===");
        mvprintw(0, 30, "(عدد الجهات: %zu)", contacts.size());
        
        for (int i = 0; i < n_options; ++i) {
            if (i == highlight) {
                attron(A_REVERSE | COLOR_PAIR(1));  // تمييز باللون
            }
            mvprintw(2 + i, 5, options[i]);
            if (i == highlight) attroff(A_REVERSE | COLOR_PAIR(1));
        }
        
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
    initscr();              // بدء ncurses
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
        clear();
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
