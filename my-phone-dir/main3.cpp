#include <ncursesw/ncurses.h>
#include <locale.h>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <codecvt>      // للتحويل UTF-8 ↔ UTF-16
#include <sstream>

struct Contact {
    std::string name, phone, email;
};

std::vector<Contact> contacts;

// ---------- مساعدات التحويل ----------
std::wstring s2ws(const std::string& str) {
    std::wstring_convert<std::codecvt_utf8<wchar_t>> conv;
    return conv.from_bytes(str);
}

std::string ws2s(const std::wstring& wstr) {
    std::wstring_convert<std::codecvt_utf8<wchar_t>> conv;
    return conv.to_bytes(wstr);
}

// ---------- حفظ وتحميل ----------
void saveContacts() {
    std::ofstream file("phone_directory_data.txt");
    if (file.is_open()) {
        for (const auto& c : contacts) {
            file << c.name << "|" << c.phone << "|" << c.email << "\n";
        }
    }
}

void loadContacts() {
    std::ifstream file("phone_directory_data.txt");
    std::string line;
    contacts.clear();
    while (std::getline(file, line)) {
        size_t p1 = line.find('|');
        size_t p2 = line.rfind('|');
        if (p1 == std::string::npos || p2 == std::string::npos || p2 <= p1) continue;
        Contact c;
        c.name  = line.substr(0, p1);
        c.phone = line.substr(p1 + 1, p2 - p1 - 1);
        c.email = line.substr(p2 + 1);
        contacts.push_back(c);
    }
    // ترتيب أبجدي (غير حساس لحالة الحروف)
    std::sort(contacts.begin(), contacts.end(), [](const Contact& a, const Contact& b) {
        std::string na = a.name, nb = b.name;
        std::transform(na.begin(), na.end(), na.begin(), ::tolower);
        std::transform(nb.begin(), nb.end(), nb.begin(), ::tolower);
        return na < nb;
    });
}

// ---------- إضافة ----------
void addContact() {
    werase(stdscr);
    mvwprintw(stdscr, 2, 2, "ادخل الاسم: ");
    wrefresh(stdscr);
    echo();
    wchar_t wbuf[256];
    wget_wstr(stdscr, (wint_t*)wbuf, 256);  // صحيح: wint_t*
    std::wstring ws = wbuf;
    noecho();

    mvwprintw(stdscr, 4, 2, "ادخل الهاتف: ");
    wrefresh(stdscr);
    echo();
    wget_wstr(stdscr, (wint_t*)wbuf, 256);
    std::wstring ws_phone = wbuf;
    noecho();

    mvwprintw(stdscr, 6, 2, "ادخل الإيميل: ");
    wrefresh(stdscr);
    echo();
    wget_wstr(stdscr, (wint_t*)wbuf, 256);
    std::wstring ws_email = wbuf;
    noecho();

    if (!ws.empty() && !ws_phone.empty()) {
        Contact c;
        c.name  = ws2s(ws);
        c.phone = ws2s(ws_phone);
        c.email = ws2s(ws_email);
        contacts.push_back(c);
        saveContacts();
        mvwprintw(stdscr, 8, 2, "تم الإضافة! اضغط أي مفتاح...");
    } else {
        mvwprintw(stdscr, 8, 2, "خطأ: الحقول مطلوبة!");
    }
    wrefresh(stdscr);
    getch();
}

// ---------- عرض ----------
void viewContacts() {
    werase(stdscr);
    mvwprintw(stdscr, 1, 2, "قائمة الجهات (مرتبة):");
    int y = 3;
    for (size_t i = 0; i < contacts.size() && y < LINES - 2; ++i) {
        std::wstring line = s2ws(std::to_string(i+1) + ". " + contacts[i].name +
                                " - " + contacts[i].phone + " - " + contacts[i].email);
        mvwaddwstr(stdscr, y++, 2, line.c_str());
    }
    if (contacts.empty()) mvwprintw(stdscr, 3, 2, "لا توجد جهات.");
    mvwprintw(stdscr, LINES-2, 2, "اضغط أي مفتاح...");
    wrefresh(stdscr);
    getch();
}

// ---------- تعديل ----------
void modifyContact() {
    werase(stdscr);
    mvwprintw(stdscr, 2, 2, "اسم الجهة للتعديل: ");
    wrefresh(stdscr);
    echo();
    wchar_t wbuf[256];
    wget_wstr(stdscr, (wint_t*)wbuf, 256);
    std::wstring search = wbuf;
    noecho();

    for (auto& c : contacts) {
        if (s2ws(c.name).find(search) != std::wstring::npos) {
            mvwprintw(stdscr, 4, 2, "الاسم الجديد: ");
            wrefresh(stdscr); echo();
            wget_wstr(stdscr, (wint_t*)wbuf, 256);
            c.name = ws2s(wbuf); noecho();

            mvwprintw(stdscr, 6, 2, "الهاتف الجديد: ");
            wrefresh(stdscr); echo();
            wget_wstr(stdscr, (wint_t*)wbuf, 256);
            c.phone = ws2s(wbuf); noecho();

            mvwprintw(stdscr, 8, 2, "الإيميل الجديد: ");
            wrefresh(stdscr); echo();
            wget_wstr(stdscr, (wint_t*)wbuf, 256);
            c.email = ws2s(wbuf); noecho();

            saveContacts();
            mvwprintw(stdscr, 10, 2, "تم التعديل!");
            wrefresh(stdscr); getch();
            return;
        }
    }
    mvwprintw(stdscr, 4, 2, "غير موجود!"); wrefresh(stdscr); getch();
}

// ---------- حذف ----------
void deleteContact() {
    werase(stdscr);
    mvwprintw(stdscr, 2, 2, "اسم الجهة لحذفها: ");
    wrefresh(stdscr);
    echo();
    wchar_t wbuf[256];
    wget_wstr(stdscr, (wint_t*)wbuf, 256);
    std::wstring search = wbuf;
    noecho();

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (s2ws(it->name).find(search) != std::wstring::npos) {
            contacts.erase(it);
            saveContacts();
            mvwprintw(stdscr, 4, 2, "تم الحذف!"); wrefresh(stdscr); getch();
            return;
        }
    }
    mvwprintw(stdscr, 4, 2, "غير موجود!"); wrefresh(stdscr); getch();
}

// ---------- بحث ----------
void searchContacts() {
    werase(stdscr);
    mvwprintw(stdscr, 2, 2, "كلمة البحث: ");
    wrefresh(stdscr);
    echo();
    wchar_t wbuf[256];
    wget_wstr(stdscr, (wint_t*)wbuf, 256);
    std::wstring query = wbuf;
    std::string q = ws2s(query);
    noecho();

    int y = 4;
    mvwprintw(stdscr, y-1, 2, "النتائج:");
    for (const auto& c : contacts) {
        std::string full = c.name + " " + c.phone + " " + c.email;
        std::transform(full.begin(), full.end(), full.begin(), ::tolower);
        std::transform(q.begin(), q.end(), q.begin(), ::tolower);
        if (full.find(q) != std::string::npos) {
            std::wstring line = s2ws(c.name + " - " + c.phone + " - " + c.email);
            if (y < LINES - 2) mvwaddwstr(stdscr, y++, 2, line.c_str());
        }
    }
    if (y == 4) mvwprintw(stdscr, y, 2, "لا نتائج.");
    mvwprintw(stdscr, LINES-2, 2, "اضغط أي مفتاح..."); wrefresh(stdscr); getch();
}

// ---------- تصدير ----------
void exportContacts() {
    std::ofstream file("exported_contacts.txt");
    if (file.is_open()) {
        for (const auto& c : contacts)
            file << c.name << " | " << c.phone << " | " << c.email << "\n";
        werase(stdscr);
        mvwprintw(stdscr, 2, 2, "تم التصدير إلى exported_contacts.txt");
        wrefresh(stdscr); getch();
    }
}

// ---------- مسح الكل ----------
void clearAllContacts() {
    werase(stdscr);
    mvwprintw(stdscr, 2, 2, "تأكيد المسح؟ (y/n): ");
    wrefresh(stdscr);
    int ch = getch();
    if (ch == 'y' || ch == 'Y') {
        contacts.clear();
        saveContacts();
        mvwprintw(stdscr, 4, 2, "تم المسح!");
    } else {
        mvwprintw(stdscr, 4, 2, "تم الإلغاء.");
    }
    wrefresh(stdscr); getch();
}

// ---------- القائمة الرئيسية ----------
int mainMenu() {
    const char* opts[] = {
        "1. إضافة جهة اتصال",
        "2. عرض الجهات",
        "3. تعديل جهة",
        "4. حذف جهة",
        "5. بحث",
        "6. تصدير",
        "7. مسح الكل",
        "8. خروج"
    };
    int n = 8, hi = 0;

    while (true) {
        werase(stdscr);
        mvwprintw(stdscr, 0, 0, "=== دليل الهواتف ===");
        mvwprintw(stdscr, 0, 35, "(عدد: %zu)", contacts.size());
        for (int i = 0; i < n; ++i) {
            if (i == hi) wattron(stdscr, A_REVERSE | COLOR_PAIR(1));
            mvwprintw(stdscr, 2+i, 5, "%s", opts[i]);
            if (i == hi) wattroff(stdscr, A_REVERSE | COLOR_PAIR(1));
        }
        wrefresh(stdscr);
        int ch = getch();
        if (ch == KEY_UP) hi = (hi == 0) ? n-1 : hi-1;
        else if (ch == KEY_DOWN) hi = (hi == n-1) ? 0 : hi+1;
        else if (ch == 10) return hi + 1;
    }
}

// ---------- main ----------
int main() {
    setlocale(LC_ALL, "");  // مهم جدًا
    initscr();
    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLUE);
    cbreak(); noecho(); keypad(stdscr, TRUE); curs_set(0);

    loadContacts();

    int sel;
    while ((sel = mainMenu()) != 8) {
        switch (sel) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: modifyContact(); break;
            case 4: delete deleteContact(); break;
            case 5: searchContacts(); break;
            case 6: exportContacts(); break;
            case 7: clearAllContacts(); break;
        }
    }

    saveContacts();
    endwin();
    return 0;
}
