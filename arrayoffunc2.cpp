#include <iostream>
#include <string>
void printhelloname();
void print(void(*printfunc)())
{
    printfunc();
}

void printpara(void(*printp)())
{
     printp();
}

void enter(std::string str)
{
    std::cout << "Hello " << str << "\n";
}

int sum(int ,int);

int main()
{
    // print(printhelloname);

    int (*ptr)(int ,int) = sum, *p;
    *p = (*ptr)(1,5);
    std::cout << *p << std::endl;
    
    return 0;
}

int sum(int a,int b)
{
    return a + b;
}
void printhelloname()
{
    std::string name;
    std::cout << "enter yout name\n";
    std::getline(std::cin,name);
    std::cout << "Hello " << name << "\n";
}