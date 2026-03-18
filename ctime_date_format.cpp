#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <string>
#include <vector>
#include <stdexcept>
#include <algorithm>

// std::string date_format(std::string date) { 
//     std::tm t = {}; 
//     std::istringstream ss(date);
//     if (!(ss >> std::get_time(&t, "%Y/%m/%d"))) {
//         return "Error";
//     }

//     int year = t.tm_year + 1900;
//     int month = t.tm_mon + 1;
//     int day = t.tm_mday;

//     std::string y_str = std::to_string(year);
//     std::string m_str = std::to_string(month);
//     std::string d_str = std::to_string(day);
    
//     std::string format1 = y_str + "/" + m_str + "/" + d_str;
//     std::string format2 = y_str + "-" +  m_str + "-"  + d_str;
//     std::string format3 = m_str + "/" + d_str + "/" + y_str;
    
//     return format1 + " | " + format2 + " | " + format3;
// }

 
std::string date_format(std::string date) { 
    
    // 1. استبدال "/" بمسافات لسهولة القراءة
    for (char &c : date) {
        if (c == '/') {
            c = ' ';
        }
    }

    std::stringstream ss(date);
    int year, month, day;

    // 2. قراءة الأرقام الثلاثة مباشرة من الـ stream
    // سيتم قراءة (2020) ثم (1) ثم (1) بشكل صحيح
    if (!(ss >> year >> month >> day)) {
        return "Error: Could not parse date components.";
    }

    std::cout << day << " " << month << " " << year << "\n";
    // 3. تحويل القيم إلى سلاسل نصية بدون أصفار قائدة
    std::string y_str = std::to_string(year);
    std::string m_str = std::to_string(month);
    std::string d_str = std::to_string(day);
    std::cout << d_str << " " << m_str << " " << y_str << "\n";
    
    // 4. التنسيق والدمج (دائماً بدون أصفار قائدة)
    
    // التنسيق الأول: YYYY/M/D
    std::string format1 = y_str + "/" + m_str + "/" + d_str;
    
    // التنسيق الثاني: YYYY-M-D
    std::string format2 = y_str + "-" + m_str + "-" + d_str;
    
    // التنسيق الثالث: M/D/YYYY
    std::string format3 = m_str + "/" + d_str + "/" + y_str;
    
    return format1 + " | " + format2 + " | " + format3;
}


int main()
{
    // std::cout << date_format("2020/1/1") <<std::endl;
    // std::cout << date_format("2019/12/28") <<std::endl;
    // std::cout << date_format("2010/10/30") <<std::endl;
    // std::cout << date_format("2013/11/29") <<std::endl;
    
    date_format("2013/01/29");
    
    return 0;
}