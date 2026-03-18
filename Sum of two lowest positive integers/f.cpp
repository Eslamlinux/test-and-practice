#include <vector>
#include <iostream>
#include <algorithm>
/*
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
	//std::sort(numbers.begin(),numbers.end());
	std::stable_sort(numbers.begin(),numbers.end());
    return numbers[0] + numbers[1];
}

int main()
{
std::cout << sumTwoSmallestNumbers({ 5, 12, 8, 19, 22 }) << std::endl;
return 0;
}