#include <iostream>
#include <vector>

std::vector<int> cumulative_sum(std::vector<int> arr) { 
    int sum = 0;
    std::vector<int> result;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        result.push_back(sum);

    }
    return result;
}

int main()
{
    for(auto c : cumulative_sum({2, 4, 8}))
    {
        std::cout << c << " ";
    }
}