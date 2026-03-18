/*
Description:
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/

#include <iostream>
#include <string>
#include <regex>

int getCount(const std::string& inputStr)
{

//solve using regex ////////////////////////////
// std::regex vowelRegex("[aeiou]");
// return std::distance(std::sregex_iterator(inputStr.begin(), inputStr.end(), vowelRegex),
//                      std::sregex_iterator());
/////////////////////////////////////////////////

//solve using string find ///////////////////////
// std::string VowelStr("aeiou");
// size_t counter = 0;
//     for (char c : inputStr)
//     {
//         if (VowelStr.find(c) != std::string::npos)
//         {
//             counter++;
//         }
//     }
// return counter;
/////////////////////////////////////////////////

// solve using count_if
// std::string VowelStr("aeiou");
// return count_if(inputStr.begin(),inputStr.end(), [&VowelStr](char c) -> bool
// {
//     return VowelStr.find(c) != std::string::npos;
    
// });
/////////////////////////////////////////////////

// solve using count ///////////////////////////
std::string VowelStr("aeiou");
int totalCount = 0;
for(char c : VowelStr)
{
totalCount += count(inputStr.cbegin(),inputStr.cend(), c);
}
return totalCount;
/////////////////////////////////////////////////

}
int main()
{

std::string testStr = "a hello world";
std::cout << "Number of vowels in \"" << testStr << "\": " << getCount(testStr) << std::endl;

    return 0;
}