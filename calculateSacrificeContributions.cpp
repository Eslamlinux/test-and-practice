//calculate Sacrifice Contributions

#include <iostream>
#include <vector>

std::vector<float> calculateSacrificeContributions(std::vector<std::string> names,std::vector<float> shares,float totalCost) 
{ 
    std::vector<float> result;
    for(float c : shares)
    {
        result.push_back(c * totalCost);
    }
    return result;
}

int main()
{
    for(auto c : calculateSacrificeContributions({"أحمد", "سارة"},{0.5, 0.5},200))
    {
        std::cout << c << " ";
    }
}