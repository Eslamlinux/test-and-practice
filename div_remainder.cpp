#include <iostream>
using namespace std;

int div_remainder(int a,int b) { 
 return a % b;
}

int main()
{
    std::cout << div_remainder(77,5) << std::endl;
    std::cout << div_remainder(99,4) << std::endl;
    std::cout << div_remainder(19,5) << std::endl;
    std::cout << div_remainder(3,3) << std::endl;
    return 0;
}