#include <iostream>
#include <vector>
bool canJump(std::vector<int> nums) { 
    bool ReachTheEnd = false;
    for(int i = 0; i < nums.size(); )
    {
        i += nums[i];
        if(i >= nums.size()-1)
        {
            ReachTheEnd = true;
        }
        if(nums[i] == 0)
        break;
    }
    return ReachTheEnd;
}

int main()
{
    std::cout << canJump({2, 3, 1, 1, 4}) << std::endl;
    std::cout << canJump({2, 3, 1, 0, 4}) << std::endl;
    std::cout << canJump({0}) << std::endl;
    std::cout << canJump({2,0,0}) << std::endl;


}