//date_formating

#include <iostream>
#include <ctime>
#include <sstream>

std::string date_formating(std::string date) 
{ 
    std::stringstream ss;
    time_t time_now = time(nullptr);
    struct tm *rightnow = localtime(&time_now);
    std::string y , m, d;
    ss << date;
    std::getline(ss,y,'-') ;
    std::getline(ss,m,'-') ;
    std::getline(ss,d,'-') ;

    return d + '-' +m + '-' + y ;
}

std::string time_now()
{
    time_t tn = time(nullptr);
    std::string result = ctime(&tn);
    return result;
}
int main()
{
    // while(true)
    // {
    //     std::cout << time_now() << std::endl;
    //     system("clear");
    // }
    
    // time_t tim = time(nullptr);

    // struct tm *local_time = localtime(&tim);
    // std::cout << local_time->tm_year + 1900;
    // std::cout << "-" << local_time->tm_mon+1 ;
    // std::cout << "-" << local_time->tm_mday << std::endl;
    // local_time->tm_year = 2024;
    // std::cout << local_time->tm_year;

    std::cout << date_formating("2020-01-01") <<std::endl;
    return 0;
}