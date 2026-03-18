// string Contains

#include <iostream>
#include <algorithm>

bool stringContains(std::string firstName,std::string contains)
{
size_t inor = firstName.find(contains);
return inor != std::string::npos;
}
int main()
{
    std::cout << stringContains("Ahmed","A") <<std::endl;
}
