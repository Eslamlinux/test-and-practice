/*
 Given an array of integers , Find the minimum sum which is obtained from summing each Two integers product .

Notes
Array/list will contain positives only .
Array/list will always have even size
Input >> Output Examples
minSum({5,4,2,3}) ==> return (22)
Explanation:
The minimum sum obtained from summing each two integers product ,  5*2 + 3*4 = 22
 */
#include <iostream>
#include <vector>
#include <algorithm>
int minSum(const std::vector<int> &passed)
{
	int result = 0;
	std::vector<int> pass(passed);
	std::sort(pass.begin(),pass.end());
	for(int i = 0 ;i < pass.size() /2;i++ )
	{
		result += pass[i] * pass[pass.size() - i -1];
	}
	return result;
}

int main()
{
	std::cout << minSum({5,4,2,3}); //5 2   4 3

	return 0;
}
