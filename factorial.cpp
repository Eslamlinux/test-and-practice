#include <iostream>
#include <cmath>


int factorial(int number) { 
    int result = 1;
    // return number < 0 ? 0 : tgamma(number + 1);
    for(int i = 1 ; i <= number; i++)
    {
        result *= i; 
    }
    return result;
}


int main()
{
    std::cout<< factorial(10) << std::endl;
    std::cout<< factorial(5) << std::endl;
    std::cout<< factorial(2) << std::endl;
    std::cout<< factorial(4) << std::endl;
    std::cout<< factorial(-1) << std::endl;
    return 0;
}