/*
 Given a string str, reverse it and omit all non-alphabetic characters.

Example
For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".

Input/Output
[input] string str
A string consists of lowercase latin letters, digits and symbols.

[output] a string

 */
#include <iostream>
#include <string>
#include <algorithm>
std::string reverse_letter(const std::string &str)
{
	std::string result;
//	for(char c : str)
//	{
//		if(isalpha(c))
//		{
//			result =  c + result;
//		}
//	}
	std::copy_if(str.rbegin(),str.rend(),back_inserter(result),isalpha);
    return result;
}
int main()
{
std::cout << reverse_letter("kri5shan");
}
