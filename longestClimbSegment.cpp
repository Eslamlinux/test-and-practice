//longestClimbSegment
#include <iostream>
#include <vector>

int longestClimbSegment(std::vector<int> heights) { 
int result =1;
int temp = 1;
if(heights.empty() || heights.size() == 1)
return heights.size();

for(int i =0; i < heights.size() ; i++)
{
if(heights[i] < heights[i+1])
temp++;
else 
{
    result = std::max(result,temp);
    temp = 1;
}
}
return result ;
}

int main()
{
std::cout << longestClimbSegment({}) <<std::endl; //0
std::cout << longestClimbSegment({2,1,2}) <<std::endl; //2
std::cout << longestClimbSegment({2}) <<std::endl; //1
std::cout << longestClimbSegment({1, 2, 3, 2, 3, 4, 1}) <<std::endl; //3
std::cout << longestClimbSegment({5, 4, 3}) <<std::endl; //1
std::cout << longestClimbSegment({10, 11, 12, 13}) <<std::endl; //4 
std::cout << longestClimbSegment({1,1,1}) <<std::endl; //1
}