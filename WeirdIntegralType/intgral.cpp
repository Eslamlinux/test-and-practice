#include <iostream>

int main()
{

short int var1{10};
short int var2{20};
char var3 {40};
char var4 {50};
std::cout << "short int: \n" ;
std::cout << sizeof(var1) << std::endl;
std::cout << sizeof(var2) << std::endl;
std::cout << "char: \n";
std::cout << sizeof(var3) <<std::endl;
std::cout <<sizeof(var4) << std::endl;

auto result1 = var1 + var2;
auto result2 = var3 + var4;
std::cout << "result short int: ";
std::cout << sizeof(result1) << std::endl;
std::cout << "result chars: ";
std::cout << sizeof(result2) << std::endl; 
std::cout << var3 <<  " " << var4 << "\n";
	return 0;
}