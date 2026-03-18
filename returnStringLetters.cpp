#include <iostream>

int returnStringLetters(std::string string1,std::string string2) { 
    return string1.length() > string2.length()? string1.length():string2.length();
}

int main()
{

std::cout << returnStringLetters("ahmed", "mohammed") << std::endl;

}