/*
There is an array with some numbers. All numbers are equal except for one. Try to find it!

find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55
It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance
*/
#include <iostream>
#include <vector>

float find_uniq(const std::vector<float> &v)
{
    float first = v[0];
    float second = v[1];
    float third = v[2]; 
    if (first != second && first != third)
        return first;
    if (second != first && second != third)
        return second;
    for (const auto &num : v)
    {
        if (num != first)   
            return num;
    }
    return first;
}

int main()
{

std::cout << find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1}) << std::endl;  // --> 2

    return 0;
}
