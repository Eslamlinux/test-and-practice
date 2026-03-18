#include <iostream>
#include <vector>
#include <string>
// #include <cmath>

float calculateTotalFastingTime(std::vector<std::string> startTimes, std::vector<std::string> endTimes) { 
    float result = 0.0;

    for (int i = 0; i < startTimes.size(); i++) {
        // استخراج الساعات والدقائق من وقت البداية
        int startHour = stoi(startTimes[i].substr(0, 2));
        int startMinute = stoi(startTimes[i].substr(3, 2));
        float startInHours = startHour + (startMinute / 60.0);

        // استخراج الساعات والدقائق من وقت النهاية
        int endHour = stoi(endTimes[i].substr(0, 2));
        int endMinute = stoi(endTimes[i].substr(3, 2));
        float endInHours = endHour + (endMinute / 60.0);

        // حساب الفرق بين وقت البداية والنهاية
        if (startInHours < endInHours) {
            result += endInHours - startInHours;
        } else {
            result += (24 - startInHours) + endInHours; // إذا كان الوقت يمتد إلى اليوم التالي
        }
    }
    // float res=0.0;
    // for(int i = 0; i < startTimes.size();i++)
    // {
    //     result += stof(startTimes[i].substr(0,2)) - stof(endTimes[i].substr(0,2));
    //     res += stof(startTimes[i].substr(0,2)) + stof(endTimes[i].substr(3,2));
    // }
    // std::cout <<"res" << res/60.0 <<std::endl;
    // return result * -1;

    return result ;
}


int main()
{

    std::cout << calculateTotalFastingTime({"04:30","05:00"},{"18:30","18:00"}) << std::endl;
    std::cout << calculateTotalFastingTime({"04:30"},{"18:30"}) << std::endl;
    std::cout << calculateTotalFastingTime({"05:00"},{"18:00"}) << std::endl;
    std::cout << calculateTotalFastingTime({"04:45"},{"18:15"}) << std::endl;
    return 0;
}