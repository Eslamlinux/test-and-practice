/*
Given a lowercase string that has alphabetic characters only and no spaces, return the highest value of consonant substrings. Consonants are any letters of the alphabet except "aeiou".

We shall assign the following values: a = 1, b = 2, c = 3, .... z = 26.

For example, for the word "zodiac", let's cross out the vowels. We get: "z o d ia c"

"zodiac" -> 26
The consonant substrings are: "z", "d" and "c" with values "z" = 26, "d" = 4 and "c" = 3. The highest is 26.

"strength" -> 57
The consonant substrings are: "str" and "ngth" with values "str" = 19 + 20 + 18 = 57 and "ngth" = 14 + 7 + 20 + 8 = 49. The highest is 57.
*/
#include <iostream>
#include <string>

int solve2(const std::string &s)
{
	size_t nums = 0;
	size_t temp = 0,max;
	std::string vowels = "aeiou";
	for(size_t i = 0 ;i < s.length() ;i++)
	{
		if(vowels.find(s[i]) != std::string::npos)
			{
			nums = std::max(temp , nums);
			temp =0;
			}
		else 
			temp += s[i] - 'a' +1;
	}
	if(temp!= 0 )
	nums = std::max(temp , nums);
    return nums;
}
//
//int main()
//{
//	std::cout << solve2("chruschtschov") << std::endl;
//	std::cout << solve2("zodiac") << std::endl;
//
//return 0;
//}