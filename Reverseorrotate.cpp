/*
 The input is a string str of digits. Cut the string into chunks (a chunk here is a substring of the initial string) of size sz (ignore the last chunk if its size is less than sz).

If the sum of a chunk's digits is divisible by 2, reverse that chunk; otherwise rotate it to the left by one position. Put together these modified chunks and return the result as a string.

If

sz is <= 0 or if str == "" return ""
sz is greater (>) than the length of str it is impossible to take a chunk of size sz hence return "".
Examples:
("123456987654", 6) --> "234561876549"
("123456987653", 6) --> "234561356789"
("66443875", 4) --> "44668753"
("66443875", 8) --> "64438756"
("664438769", 8) --> "67834466"
("123456779", 8) --> "23456771"
("", 8) --> ""
("123456779", 0) --> "" 
("563000655734469485", 4) --> "0365065073456944"
Example of a string rotated to the left by one position:
s = "123456" gives "234561".
*/
#include <string>
#include <iostream>
#include <algorithm>
class RevRot
{
public:
    static std::string revRot(const std::string &strng, unsigned int sz)
    {
		if(strng.length() < sz && strng == "")
		return  "";
		size_t To_Sum = 0;
		size_t Temp = 0;
		std::string Result = "";
		std::string sTemp = "";
		for(size_t i= 0; i < strng.length(); i++)
		{
			if(Temp < sz)
			{
				To_Sum += strng[i] - '0';
				sTemp += strng[i];
				Temp++;
			}
			if(Temp == sz)
			{
				Temp = 0;
				if(To_Sum % 2 == 0)
				{
					std::reverse(sTemp.begin(),sTemp.end());
					Result += sTemp;
				}
				else
				{
					char cTemp = sTemp.substr(0,1)[0];
					sTemp.erase(0,1);
					Result += sTemp + cTemp;
				}
				sTemp = "";
				To_Sum = 0;
			}
			
		}
		return Result;
	}
};

int main()
{
	RevRot a;
	// std::cout << "123456987654555" << std::endl;
	// std::cout << a.revRot("123456987654555",6);
	std::cout << a.revRot("733049910872815764",5); //33047 91089 28157  //330479108928157
	return 0;
}
