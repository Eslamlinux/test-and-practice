#include <iostream>
#include <string>
#include <vector>

std::string hashtag_it(std::vector<std::string> my_array) { 
    std::string result;
    for(auto c: my_array)
    {
        result += "#" + c + " ";
    }
    result.pop_back();
    return result;
}

int main()
{
std::cout << hashtag_it({"stay_home", "coronavirus", "Saudi_Arabia"}) <<std::endl;

}