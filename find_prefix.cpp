#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
std::vector<std::string> find_prefix(std::vector<std::string> words,std::string text) 
	{
	std::vector<std::string> result;
	std::vector<std::string> temp(words);
	std::transform(text.begin(),text.end(),text.begin(),::tolower);
	for(int i = 0; i < words.size();i++)
	{
  	std::transform(temp[i].begin(),temp[i].end(),temp[i].begin(),::tolower);
	size_t pos = temp[i].find(text);
	if(pos != std::string::npos)
	result.push_back(words[i]);
	}
	if(result.empty())
		result.push_back("No matches found");

	return result;
	}
int main()
{

	for(auto c:find_prefix({"Reassemble", "Remainder", "Room", "Receive"},"Re"))
	{
	std::cout << c << " ";
	}
	return 0;
}
