#include <iostream>
#include <string>
#include <climits>
#include <vector>

std::string multiply(std::string num1, std::string num2) {
// 1. معالجة الإدخال والتحقق من الصفر

    // إزالة الأصفار البادئة غير الضرورية
    // باستخدام ltrim() للحصول على أبسط تمثيل للرقم
    // Note: C++ std::string doesn't have a built-in ltrim like Python. We'll implement it simply:
    size_t first_digit1 = num1.find_first_not_of('0');
    if (std::string::npos != first_digit1) {
        num1 = num1.substr(first_digit1);
    } else {
        num1 = "0";
    }
    size_t first_digit2 = num2.find_first_not_of('0');
    if (std::string::npos != first_digit2) {
        num2 = num2.substr(first_digit2);
    } else {
        num2 = "0";
    }

    // التحقق من حالة الصفر
    if (num1 == "0" || num2 == "0") {
        return "0";
    }
    
    int n1 = num1.length();
    int n2 = num2.length();
    
    // متجه لتخزين النتيجة الجزئية. الحجم الأقصى هو مجموع الأطوال.
    std::vector<int> result(n1 + n2, 0);

    // 2. عملية الضرب الأساسية (الضرب الجزئي)
    // نبدأ من الخانات الأقل أهمية (الآحاد)
    for (int i = n1 - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        for (int j = n2 - 1; j >= 0; j--) {
            int digit2 = num2[j] - '0';
            
            // i + j + 1 هو الموضع الصحيح في متجه النتيجة (الخانة الحالية)
            int pos = i + j + 1;
            // الضرب الجزئي + القيمة الموجودة مسبقاً في الخانة
            int product = digit1 * digit2 + result[pos];
            
            // 3. معالجة الترحيل (Carry)
            
            // القيمة التي سيتم ترحيلها للخانة التالية (i + j)
            int carry = product / 10;
            
            // القيمة المتبقية في الخانة الحالية (i + j + 1)
            result[pos] = product % 10;
            
            // إضافة قيمة الترحيل إلى الخانة السابقة (الأعلى أهمية)
            result[i + j] += carry;
        }
    }

    // 4. التجميع والإخراج

    // بناء السلسلة النصية للنتيجة النهائية
    std::string final_result = "";
    
    // إيجاد أول رقم غير صفري (لإزالة الأصفار البادئة)
    int start_index = 0;
    while (start_index < result.size() - 1 && result[start_index] == 0) {
        start_index++;
    }
    
    // ضم الأرقام بدءاً من أول رقم غير صفري
    for (int i = start_index; i < result.size(); i++) {
        final_result += std::to_string(result[i]);
    }

    return final_result;
}

int main()
{

std::string n1 = "1234567890123456789";
    std::string n2 = "9876543210987654321";

    // مثال بسيط
    // std::string n1 = "123";
    // std::string n2 = "45"; 
    
    std::cout << "first number " << n1 << std::endl;
    std::cout << "second number: " << n2 << std::endl;
    
    std::string product = multiply(n1, n2);
    
    std::cout << "result: " << product << std::endl; 
    
    // مثال اختبار حالة الأصفار البادئة
    std::cout << "\n---zero status ---" << std::endl;
    std::cout << "00123 * 0045 = " << multiply("00123", "0045") << std::endl; // النتيجة: 5535

}