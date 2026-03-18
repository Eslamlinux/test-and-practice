#include <algorithm>
#include <iostream>
#include <limits>

int main()
{
std::cout << "short from: " << std::numeric_limits<short>::min() << " to: "<< std::numeric_limits<short>::max() << std::endl;
std::cout <<"unsignd short: " << std::numeric_limits<unsigned short>::min() << " to: " << std::numeric_limits<unsigned short>::max() <<std::endl;
std::cout << "long: " << std::numeric_limits<long>::min() << " to: " << std::numeric_limits<long>::max() << std::endl;
std::cout << "int: " << std::numeric_limits<int>::min() << " to: " << std::numeric_limits<int>::max() << std::endl;
std::cout << "unsigned int: " << std::numeric_limits<unsigned int>::min() << " to: " << std::numeric_limits<unsigned int>::max() << std::endl;
std::cout << "float: " << std::numeric_limits<float>::min() << " to: " << std::numeric_limits<float>::max() << std::endl;
std:: cout << "lowes float: " << std::numeric_limits<float>::lowest() << " to: " << std::numeric_limits<float>::max() << std::endl;
std::cout << "double: " <<std::numeric_limits<double>::min()<< " to: " <<std::numeric_limits<double>::max() << std::endl;
std::cout << "lowest double: " <<std::numeric_limits<double>::lowest()<< " to: " <<std::numeric_limits<double>::max() << std::endl;
std::cout << "long double: " <<std::numeric_limits<long double>::min()<< " to: " <<std::numeric_limits<long double>::max() << std::endl;
std::cout << "lowest long double: " <<std::numeric_limits<long double>::lowest()<< " to: " <<std::numeric_limits<long double>::max() << std::endl;
}