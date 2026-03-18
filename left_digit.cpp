#include <iostream>
#include <string>

int left_digit(std::string strParam) { 
    for(auto c:strParam)
    {
        if(isdigit(c))
        return c - '0';
    }
    return 0;
}

int main()
{
std::cout << left_digit("Welcome2back") <<std::endl;

}