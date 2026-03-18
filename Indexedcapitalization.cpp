/*
Given a string of lowercase letters and an array of integer indices, capitalize all letters at the given indices. If an index is beyond the string, it should be ignored.

Examples:
"abcdef", [1,2,5]     ==> "aBCdeF"
"abcdef", [1,2,5,100] ==> "aBCdeF" // There is no index 100.

*/
#include <iostream>
#include <string>
#include <vector>

std::string capitalize(const std::string &s, const std::vector<int> &idxs)
{
    std::string result = s;
    for (int index : idxs)
    {
        if (index >= 0 && index < static_cast<int>(result.size()))
        {
            result[index] = toupper(result[index]);
        }
    }
    return result;
}

int main()
{
    std::cout << capitalize("abcdef", {1, 2, 5}) << std::endl;        // Output: "aBCdeF"
    std::cout << capitalize("abcdef", {1, 2, 5, 100}) << std::endl; // Output: "aBCdeF"

    return 0;
}