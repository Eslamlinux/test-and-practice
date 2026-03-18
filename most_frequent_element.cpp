//most_frequent_element

#include <iostream>
#include <vector>
#include <algorithm>

int most_frequent_element(std::vector<int> arr) 
{
    int result =0;
    int big =0;
    for(int c:arr)
    {
        int temp = count(arr.begin(),arr.end(),c);
        if(temp > big)
        {
            big = temp;
            result = c;
        }
    }
    return result;
}
int main()
{
    std::cout << most_frequent_element({13, 2, 1, 2, 10, 2, 1, 1, 2, 2}) <<std::endl; //2
    std::cout << most_frequent_element({1, 2, 3, 4, 1, 5, -5, -5, -5, -5, -5, 6}) <<std::endl; //-5
    std::cout << most_frequent_element({1, 2, 3, 3, 3, 3}) <<std::endl; //3
    std::cout << most_frequent_element({0, 5, 6, 2, 1, 5}) <<std::endl; //3
}