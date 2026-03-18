#include <iostream>
#include "binarydec.cpp"

int main()
{
    std::cout << To_Binary_dir("9") << std::endl; // 1001
    std::cout << To_Decimal("100100") << std::endl; // 36 after do << left shift
    std::cout << (1 << 1) << std::endl;
    std::cout << (36 >> 1) << std::endl;
    int a = 10;
    int b = 20;

    std::cout << "befor swap: " << (a) << " " << b << std::endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    std::cout << "after swap by bits: " << (a) << " " << b << std::endl;
    
    return 0;
}