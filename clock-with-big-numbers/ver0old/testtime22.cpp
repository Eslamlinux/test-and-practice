#include <iostream>
#include <vector>
#include <string>
#include <functional> // لاستخدام std::function

struct BigNumber {
    // جعلنا الدوال static ليمكن الإشارة إليها كـ "مؤشر دالة"
    static std::vector<std::string> getZero() {
        return {"  **  ", " *  * ", " *  * ", " *  * ", "  **  "};
    }

    static std::vector<std::string> getOne() {
        return {"   *  ", "  **  ", "   *  ", "   *  ", "  *** "};
    }

    // تعريف نوع الدالة لتسهيل الكتابة
    using NumberFunc = std::vector<std::string>(*)();

    // مصفوفة تربط أرقام الـ enum بالدوال مباشرة
    // الترتيب هنا يجب أن يطابق ترتيب الأرقام (0، 1، 2...)
    static inline NumberFunc functions[] = { getZero, getOne };

    std::vector<std::string> printing(int num, int much) {
        std::vector<std::string> result;
        
        // بدلاً من if، نستدعي الدالة من المصفوفة مباشرة باستخدام الرقم
        std::vector<std::string> pattern = functions[num]();

        for (const std::string& line : pattern) {
            for (int r = 0; r < much; r++) {
                result.push_back(line);
                // إذا كنت تريد طباعة much بجانب بعضها ستحتاج تعديل بسيط
                // لكن هنا نتبع منطق كودك الأصلي في الإضافة
            }
            result.push_back("\n");
        }
        return result;
    }
};

int main()
{
    // while(true)
    // {
    //     std::cout << Time_Now() << std::endl;
    //     system("clear");
    // }
    BigNumber z;
    for(auto c: z.printing(1,3))
    {
        std::cout<< c ;
    }
    // return 0;
}