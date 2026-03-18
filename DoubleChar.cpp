/*
Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

Examples (Input -> Output):
* "String"      -> "SSttrriinngg"
* "Hello World" -> "HHeelllloo  WWoorrlldd"
* "1234!_ "     -> "11223344!!__  "
Good Luck!


*/
#include <iostream>
#include <string>

//using recursion instead of loops

std::string To_Help_Double_Char(const std::string& str ,size_t i)
{
    if(i == str.length()) return "";
    std::string Double_Char(2,str[i]);
    return  Double_Char + To_Help_Double_Char(str,i+1);
}

std::string double_char(const std::string& str)
{
    return To_Help_Double_Char(str,0);
}
int main()
{
std::cout << double_char("hello") << std::endl;


    return 0;
}