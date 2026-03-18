#include <iostream>
class سطر
{
    public:
     سطر()
    {
        std::cout <<std::endl;
    }
};
class newo
{
    newo(){std::cout << "hi";}
};

class مساحة_اسم
{
    public:
    int اطبع_جمع(int a, int b)
    {
        std::cout << a + b;
    } 
};

namespace اطبع
{
    int اطبع_جمع(int a, int b)
    {
        std::cout << a + b;
    } 
}
int main()
{

    using namespace اطبع;

    اطبع_جمع(5,5);

    مساحة_اسم اطبع;

    سطر جديد;

    اطبع::اطبع_جمع(10,10);

    سطر اخر_جديد;
    
     اطبع_جمع (3,3);


}