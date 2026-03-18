
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int countVowels(string s) { 
std::string VowelStr("aeiouAEIOU");
int totalCount = 0;
for(char c : VowelStr)
{
totalCount += count(s.begin(),s.end(), c);
}
return totalCount;
}

int main()
{
    std::cout << countVowels("Hello world") <<std::endl;
}