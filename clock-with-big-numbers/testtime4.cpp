#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
std::string Time_Now() {
    time_t thesec = time(nullptr);
    struct tm *thetime = localtime(&thesec);
    char buffer[10];
    // استخدام strftime يضمن تنسيق ثابت (مثلاً 09:05:01)
    strftime(buffer, sizeof(buffer), "%H:%M:%S", thetime);
    return std::string(buffer);
}

struct BigNumber {
    // ... (نفس دوال get0 إلى get9 ودالة getColon التي كتبتها أنت) ...
  static std::vector<std::string> get0()
    {
        return {"  **  ", " *  * ", " *  * ", " *  * ", "  **  "};
    }
    static std::vector<std::string> get1() 
    {
        return {"   *  ", "  **  ", "   *  ", "   *  ", "  *** "};
    }
    static std::vector<std::string> get2() 
    {
        return {" **** ", "    * ", " **** ", " *    ", " **** "};
    }
    static std::vector<std::string> get3() 
    {
        return {" **** ", "    * ", " **** ", "    * ", " **** "};
    }
    static std::vector<std::string> get4() 
    {
        return {" *  * ", " *  * ", " **** ", "    * ", "    * "};
    }
    static std::vector<std::string> get5() 
    {
        return {" **** ", " *    ", " **** ", "    * ", " **** "};
    }
    static std::vector<std::string> get6() 
    {
        return {"  ** ", " *   ", " *** ", " *  * ", "  ***  "};
    }
    static std::vector<std::string> get7() 
    {
        return {" **** ", "    * ", "   *  ", "  *   ", " *    "};
    }
    static std::vector<std::string> get8() 
    {
        return {"  **  ", " *  * ", "  **  ", " *  * ", "  **  "};
    }
    static std::vector<std::string> get9() {
        return {"  **  ", " *  * ", "  *** ", "    * ", "  **  "};
    }
    static std::vector<std::string> getColon() {
        return {"      ", "  '*' ", "      ", "  '*' ", "      "};
    }

    using FuncNum = std::vector<std::string>(*)();
    // النقطتين ستكون في الخانة رقم 10 في المصفوفة
    static inline FuncNum funcArr[] = {get0, get1, get2, get3, get4, get5, get6, get7, get8, get9, getColon};

    void Print_Clock() {
        std::string now = Time_Now();
        std::vector<std::vector<std::string>> displayData;

        // 1. جمع بيانات كل رقم سيتم طباعته في مصفوفة ثنائية
        for (char c : now) {
            int index = (c == ':') ? 10 : (c - '0');
            displayData.push_back(funcArr[index]());
        }

        // 2. الطباعة الأفقية  (السطر الأول لكل الأرقام، ثم الثاني...)
        for (int row = 0; row < 5; row++) {
            for (int i = 0; i < displayData.size(); i++) {
                std::cout << displayData[i][row] << " "; // مسافة بسيطة بين الأرقام
            }
            std::cout << "\n";
        }
    }
};

int main() {
    BigNumber clock;
    while (true) {
        system("clear"); // أو system("cls") لويندوز
        clock.Print_Clock();
        
        // تأخير بسيط لكي لا يستهلك البرنامج المعالج بالكامل
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    return 0;
}