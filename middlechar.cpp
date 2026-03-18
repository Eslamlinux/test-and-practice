#include <iostream>

std::string middle_char(std::string word) { 
    if(word.length() % 2 == 0)
    return word.substr((word.length() /2)-1 , word.length() /2);
    return word.substr(word.length()/2,1);
}

int main()
{
    std::cout << middle_char("teist") << std::endl;
}