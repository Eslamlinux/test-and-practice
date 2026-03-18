#include <iostream>
#include <cmath>


int root_check(float sqr,int num) { 
return sqrt(sqr) == num? num:0;
}

int main()
{

    std::cout << root_check(25,5) << std::endl;
    std::cout << root_check(4,2) << std::endl;
    std::cout << root_check(49,8) << std::endl;
    std::cout << root_check(64,8) << std::endl;
    std::cout << "\n";
    std::cout << sqrt(64);
    return 0;
}