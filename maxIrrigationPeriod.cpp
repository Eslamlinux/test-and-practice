//max Irrigation Period

#include <iostream>
#include <vector>
#include <algorithm>
int maxIrrigationPeriod(std::vector<int> irrigation,int water) 
{ 
    if (irrigation.empty()) return 0;
    long long Sum_Irri = 0; 
    int max_result = 0;
    int left = 0;

    for (int right = 0; right < (int)irrigation.size(); right++) 
    {
        Sum_Irri += irrigation[right];

        while (Sum_Irri > water && left <= right) 
        {
            Sum_Irri -= irrigation[left];
            left++;
        }
        max_result = std::max(max_result, right - left + 1);
    }
    return max_result;
}

int main()
{
    std::cout << maxIrrigationPeriod({1, 1, 1, 1},3) << std::endl;//3
    std::cout << maxIrrigationPeriod({1, 2, 3, 4, 5},5) << std::endl;//2
    std::cout << maxIrrigationPeriod({2,2,2},3) << std::endl;//1
    std::cout << maxIrrigationPeriod({},5) << std::endl;//0
    std::cout << maxIrrigationPeriod({1, 2, 1, 0, 1},4) << std::endl; //4
    std::cout << maxIrrigationPeriod({1, 5, 1, 1, 1},3) << std::endl; //3

    return 0;
}