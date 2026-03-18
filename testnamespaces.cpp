#include <iostream>

namespace One_Clan
{
    int func1(int& a,int b)
    {
        a = 4;
        return a + b;
    }
    void printf(int a , int b)
    {
        std::cout << func1(a ,b) <<std::endl;
    }
}
namespace Tow_Clan
{
    int func1(int& a,int b)
    {
        return a * b;
    }
    void printf(int a , int b)
    {
        std::cout << func1(a ,b) <<std::endl;
    }
}

namespace Std
{
    void cout(int a)
    {
        std::cout << a << std::endl;
    }
}

namespace var
{
    int val;
}
namespace sting
{
    int age;
    std::string s()
    {
        return "Hiiiiii";
    }
}
int main()
{
    using namespace Tow_Clan;
    // using namespace One_Clan;
    using namespace var;
int d = 7;
One_Clan::printf(10,5);
std::cout << One_Clan::func1(d,3) << std::endl;
std::cout << d << std::endl;

printf(5,5) ;
Std::cout(555);
One_Clan::printf(4,4);
val = 11;
printf(val,val);
sting::s = "Nooooooo";
std::cout << sting::s;

}