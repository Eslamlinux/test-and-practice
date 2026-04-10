#include <iostream>



int main()
{
    int a = 10;
    if(a > 1)
    {
        std::cout << "a > 1\n";
    }
    else if(a > 2)
    {
        std::cout << "a > 2\n";
    }
    else if(a > 3)
    {
        std::cout << "a > 3\n";
    }
    else
    {
        std::cout << "else \n";
    }
    
    if(a > 4)
    {
        std::cout << "a > 4\n";
    }
    
    return 0;
}