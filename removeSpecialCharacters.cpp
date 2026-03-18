//remove Special Characters
#include <iostream>

std::string removeSpecialCharacters(std::string strParam) 
{ 
    std::string result;
    for(char c: strParam)
    {
        if(isalpha(c) ||c == '_'||c == '-'|| c == ' ')
        result += c;
    }
    return result;
}
int main()
{
    std::cout << removeSpecialCharacters("Are_u_coming?") << std::endl;
    std::cout << removeSpecialCharacters("Hi How are you!") << std::endl;
    std::cout << removeSpecialCharacters("Solve-the-challenge") << std::endl;
    std::cout << removeSpecialCharacters("Nora Rahaf$") << std::endl;
}