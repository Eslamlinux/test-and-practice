#include <iostream>
#include <algorithm>
#include <vector>
int maxFundedCases(std::vector<int> needs,int budget) { 
    int counter = 0;
    sort(needs.begin(),needs.end());
    for(int i = 0 ; i < needs.size(); i++)
    {
        if(budget >= needs[i])
        {
        budget -= needs[i];
        counter++;
        }
    }
    return counter;
}

int main()
{
    std::cout << maxFundedCases({5, 3, 4, 2},10) << std::endl;
    std::cout << maxFundedCases({10, 10, 10},5) << std::endl;
    std::cout << maxFundedCases({1, 1, 1, 1, 1},3) << std::endl;
    std::cout << maxFundedCases({},100) << std::endl;
}