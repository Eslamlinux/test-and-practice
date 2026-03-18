//str len comparison
#include <iostream>
#include <vector>

bool str_len_comparison(std::vector<std::string> words) 
{
    if(words.size() < 2)
    return false;
    size_t size = words[0].length();
    for(std::string c :words)
    {
        if(c.length() != size)
        return false;
    }
    return true;
}

int main()
{
    std::cout << str_len_comparison({"Satr", "CoderHub"}) <<std::endl;
    std::cout << str_len_comparison({"a", "b"}) <<std::endl;
}