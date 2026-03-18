/*
Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice versa). Leave any incidence of c untouched.

Example:

'acb' --> 'bca'
'aabacbaa' --> 'bbabcabb'

*/

#include <string>
#include <iostream>

std::string switcheroo(const std::string &s) {
  std::string result; 
  for(char c :s)
	{
		c == 'a'?result += 'b':c == 'b'? result += 'a':result += 'c';
	}
  return result;
}

//int main()
//{
//std::cout<<switcheroo("aaabcccbaaa") << std::endl;
//}