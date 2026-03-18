//first Missing Positive
#include <iostream>
#include <algorithm>
#include <vector>
int firstMissingPositive(std::vector<int> nums) 
{ 
    int siz = nums.size();
    for(int i =0; i < siz; i++)
    {
       while(nums[i] > 0 && nums[i] <= siz && nums[i] != nums[nums[i] - 1])
                std::swap(nums[i], nums[nums[i] -1]);
    }

    for(int i = 0 ;i < siz; i++)
    {
        if(nums[i] != i+1)
        return i+1;
    }
    return siz + 1;
}


int main()
{
    std::cout << firstMissingPositive({3, 4, -1, 1}) <<std::endl; //-1 1 3 4
    std::cout << firstMissingPositive({7, 8, 9, 11, 12}) <<std::endl; //-1 1 3 4


}