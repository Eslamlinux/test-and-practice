/*
Find the number with the most digits.

If two numbers in the argument array have the same number of digits, return the first one in the array.
*/
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int findLongest(const std::vector<int>& numbers) {
 	std::vector<int> numsize;
	int result {0};
	for(int i =0; i<numbers.size(); i++)
		{
			numsize.push_back(std::to_string(numbers[i]).size());
 		}
		std::sort(numsize.begin(),numsize.end(),std::greater<int>());
	for(int i =0; i<numbers.size(); i++)
		{
			if(numsize[0] == std::to_string(numbers[i]).size())
				{
				 result = numbers[i];
					break;
				}
		}
	return result ;
}

int main()
{
	std::cout << findLongest(std::vector<int> {3, 40000, 100}) << std::endl;
	std::cout << findLongest(std::vector<int> { 1,300000, 200, 400000}) <<std::endl;
	
return 0;
}