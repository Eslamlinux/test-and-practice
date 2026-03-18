/*
 Given an array of numbers (in string format), you must return a string. The numbers correspond to the letters of the alphabet in reverse order: a=26, z=1 etc. You should also account for '!', '?' and ' ' that are represented by '27', '28' and '29' respectively.

All inputs will be valid.

 */
#include <iostream>
#include <string>
#include <vector>

std::string switcher(const std::vector<std::string>& arr) {
	std::string result ;
	for(int i = 0; i < arr.size();i++)
	{
		if(arr[i] != "27" && arr[i] != "28"&& arr[i]!= "29")
		result += (26 - std::stoi(arr[i])) + 'a';
		arr[i] == "27"? result += "!":arr[i] == "28"? result+= "?":result += " ";
	}
  return result;
}

int main()
{
	std::vector<std::string>num = {"24", "12", "23", "22", "4", "26", "9", "8"};
	std::cout << switcher(num);
	return 0;
}
