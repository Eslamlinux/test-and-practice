//sort By Length

#include <iostream>
#include <algorithm>
#include <vector>
std::string sortByLength(std::string txt) { 
std::vector<std::string> t;
std::string word;
for(int i = 0; i < txt.length(); i++)
{
    if(txt[i] != ' ')
    word += txt[i];
    else
    {
        t.push_back(word);
        word ="";
    }
}
if(!word.empty())
    t.push_back(word);
    word ="";

std::sort(t.begin(),t.end(),[](const std::string& a, const std::string b){
    return a.length() < b.length(); });
for(auto c: t)
{
    word += c + " ";
}
word.pop_back();
return word;
}

int main()
{
    std::cout << sortByLength("Have a wonderful day") <<std::endl;
    std::cout << sortByLength("I see you") <<std::endl;
    std::cout << sortByLength("Get in the boat") <<std::endl;
    std::cout << sortByLength("Do you speak English") <<std::endl;

    return 0;
}