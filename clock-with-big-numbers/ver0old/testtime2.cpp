#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <sstream>

// تطبيق للساعة بشكل راسي 
std::string Time_Now()
{
    time_t thesec = time(nullptr);
    auto alltime = ctime(&thesec);
    struct tm *thetime = localtime(&thesec);
    std::string time_H_M_s;
    time_H_M_s +=  std::to_string(thetime->tm_hour) + ":" + std::to_string(thetime->tm_min) + ":" + std::to_string(thetime->tm_sec);
    return time_H_M_s;
}

struct BigNumber
{
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
        return {"  ** ", " *   ", " *** ", " * * ", "  *  "};
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
    static inline FuncNum funcArr[] = {get0 ,get1,get2,get3,get4,get5,get6,get7,get8,get9,getColon};

    std::vector<std::string> printing(int num,int much)
    {
        std::vector<std::string> result;
        std::vector<std::string> pattern = funcArr[num]();
            for(int t = 0; t < pattern.size(); t++)
            {
                    for(int r = 0 ; r < much ; r++)
                    {
                        result.push_back(pattern[t]);
                    }
                    result.push_back("\n");
            }

        return result;
    }

};

    void Print_Time_InBig()
    {
        std::stringstream ss ;
        ss << Time_Now();
        std::vector<char>temp;
        std::string str;
        ss >> str;

        for(int k =0; k < str.length(); k++)
        {
            temp.push_back(str[k]);
        }
        
        BigNumber toTime;
        int tonum =0;
        for(int i =0 ;i < temp.size(); i++)
        {
            if(temp[i] == ':' )
            tonum = -1;
            tonum = temp[i] -'0';
            for(std::string c : toTime.printing(tonum,1))
            {
                std::cout << c;
            }
        }
    }
int main()
{
    while(true)
    {
        Print_Time_InBig();
        system("clear");
        
    }

    // BigNumber z;
    // for(auto c: z.printing(10,3))
    // {
    //     std::cout<< c ;
    // }
    return 0;
}