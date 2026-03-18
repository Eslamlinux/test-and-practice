

/*
Complete the method which accepts an array of integers, and returns one of the following:

"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
The order does not have to be strict: a sorted array can contain consecutive duplicates, e.g. [1, 1, 2, 3] is sorted in ascending order.

It is guaranteed that there will always be a unique valid answer. More precisely:

there will be no arrays with less than 2 elements
there will be no arrays where all elements are equal

*/

#include <functional>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

std::string is_sorted_and_how(const std::vector<int> &numbers)
{
	std::vector<int>temp(numbers);
	std::sort(temp.begin(),temp.end(),std::greater<>());
	if(temp == numbers)
	return "yes, descending";
	std::sort(temp.begin(),temp.end());
	if(temp == numbers)
    return "yes, ascending"; 
 	return "no";
}

int main()
{	
	std::cout << is_sorted_and_how({1, 1, 2, 3}) << std::endl;
	std::cout << is_sorted_and_how({9, 9, -5, - 7}) << std::endl;
	std::cout << is_sorted_and_how({1, 3, 9, 4}) << std::endl;
	return 0;
}