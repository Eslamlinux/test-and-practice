// test time and date in ctim lib
#include <iostream>
#include <ctime>
#include <tuple>
#include <unistd.h>
std::tuple<float,char,float,char,float> inTime()
{
    time_t t = time(nullptr);
    struct tm* ptime = localtime(&t);
    return {ptime->tm_hour,':',ptime->tm_min , ':', ptime->tm_sec};
}

int main()
{

    // float h= std::get<0>(inTime());
    // char c = std::get<1>(inTime()); 
    // float m = std::get<2>(inTime()); 
    // float s = std::get<4>(inTime()) ;
    // std::cout << h << c << m << c << s; 

    while (true)
    {
        auto [hour,c1, mine,c2,seco] = inTime();
        std::cout << hour << c1 << mine << c2 << seco << std::endl;
        system("clear");
    }

        // std::cout << std::get<0>(inTime())  << std::get<1>(inTime()) 
        // << std::get<2>(inTime())  << std::get<3>(inTime()) 
        // << std::get<4>(inTime()) ;

        // std::cout << std::endl;
        // sleep(2);   
        // std::cout << std::get<0>(inTime())  << std::get<1>(inTime()) 
        // << std::get<2>(inTime())  << std::get<3>(inTime()) 
        // << std::get<4>(inTime()) ;
}