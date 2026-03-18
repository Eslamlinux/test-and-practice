#include <iostream>

class myclass
{
    public:
    void func(std::string n)
    {

        
        std::string name ;
        name = n;
        std::cout << "hello " << name << std::endl;
    }
    // myclass operator+()
    // {
    //     this->func() = + this->func();
    //     std::cout << *this;
    // }
};
int main()
{
    myclass c1;
    c1.func("eslam");
    c1.func("mohamed");
    c1.func("hassan");
    system("pause");

    return 0;
}
