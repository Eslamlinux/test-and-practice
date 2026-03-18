#include <iostream>
#include <vector>
#include <string>

struct BigNumber {
    // دوال الأرقام (تم جعلها static لسهولة الوصول)
    static std::vector<std::string> getZero() {
        return {"  **  ", " *  * ", " *  * ", " *  * ", "  **  "};
    }
    static std::vector<std::string> getOne() {
        return {"   * ", "  ** ", "   * ", "   * ", "  *** "};
    }
    static std::vector<std::string> getColon() { // للنقطتين في الساعة
        return {"   ", " * ", "   ", " * ", "   "};
    }

    // مصفوفة مؤشرات الدوال لتعويض الـ Switch والـ IF
    typedef std::vector<std::string> (*NumFunc)();
    static inline NumFunc functions[] = { getZero, getOne };

    // الدالة السحرية لطباعة الساعة كاملة بجانب بعضها
    void printTime(std::vector<int> numbers, int scale) {
        int rows = 5; // عدد الأسطر في كل رقم

        for (int i = 0; i < rows; ++i) { // لكل سطر
            for (int num : numbers) {    // نمر على كل رقم مطلوب طباعته
                std::vector<std::string> pattern = (num == -1) ? getColon() : functions[num]();
                
                // تكرار الحروف (العرض)
                for (char c : pattern[i]) {
                    for (int s = 0; s < scale; ++s) {
                        std::cout << c;
                    }
                }
                std::cout << "  "; // مسافة بين كل رقم وآخر
            }
            
            // تكرار الأسطر (الطول)
            for (int s = 0; s < scale - 1; ++s) {
                 // كود إضافي هنا إذا أردت جعل الرقم أطول عمودياً أيضاً
            }
            std::cout << std::endl;
        }
    }
};

int main()
{

    BigNumber z;
   z.printTime({1,-1,0},2);

}