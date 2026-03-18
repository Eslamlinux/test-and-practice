#include <iostream>
#include <vector>

std::vector<int> word_length(std::vector<std::string> arr) { 
    std::vector<int>result;
    for(std::string c:arr)
    {
        result.push_back(c.length());
    }
    return result;
}

int main()
{
for(int c:word_length({"Code", "hub"}))
{
    std::cout << c << " " ;
}
}