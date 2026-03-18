#include <iostream>

std::string hasSpace(std::string strParam) { 
    for(char& c :strParam)
    {
        if(c == ' ')
        c = '#';
    }
    return strParam;
}

int main()
{
    std::cout << hasSpace("Saudi Arabia") <<std::endl;
}
