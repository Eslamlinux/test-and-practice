/*

An anagram is the result of rearranging the letters of a word to produce a new word (see wikipedia).

Note: anagrams are case insensitive

Complete the function to return true if the two arguments given are anagrams of each other; return false otherwise.

Examples
"foefet" is an anagram of "toffee"

"Buckethead" is an anagram of "DeathCubeK"


*/

#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>

//bool isAnagram(std::string test, std::string original){
//	for(char& c :test)
//	{
//	c = static_cast<char>( std::tolower(static_cast<unsigned char>(c)));
//	}
//	for(char& c :original)
//	{
//	c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
//	}
//	std::sort(test.begin(),test.end());
//	std::sort(original.begin(),original.end());
//	return test == original;
//}

bool isAnagram(std::string test, std::string original){
	for(char& c :test)
	{
	c =  std::tolower(c);
	}
	for(char& c :original)
	{
	c = std::tolower(c);
	}
	std::sort(test.begin(),test.end());
	std::sort(original.begin(),original.end());
	return test == original;
}
//int main()
//{
//	std::cout << isAnagram("toffee","foefet") <<std::endl;
//	std::cout << isAnagram("Buckethead", "DeathCubeK") <<std::endl;
//	std::cout << isAnagram("Twoo", "WooT") <<std::endl;
//
//	return 0;
//}