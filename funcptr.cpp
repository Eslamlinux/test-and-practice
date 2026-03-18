#include <iostream>

void println(int num)
{
    std::cout << "\n" << num << "\n";
}
int main()
{

    void(*ptr)(int) =&println;
    
    ptr(10);
    println(15);
    
    return 0;
}