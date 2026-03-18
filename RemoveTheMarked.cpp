/*
Define a method/function that removes from a given array of integers all the values contained in a second array.

Examples (input -> output):
* [1, 1, 2, 3, 1, 2, 3, 4], [1, 3] -> [2, 2, 4]
* [1, 1, 2, 3, 1, 2, 3, 4, 4, 3, 5, 6, 7, 2, 8], [1, 3, 4, 2] -> [5, 6, 7, 8]
* [8, 2, 7, 2, 3, 4, 6, 5, 4, 4, 1, 2, 3], [2, 4, 3] -> [8, 7, 6, 5, 1]
*/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
std::vector<int> remove_values(std::vector<int> integers, std::vector<int> values) {
    std::unordered_set<int> Value_To_Remove(values.begin(),values.end());
    auto new_end = std::remove_if(integers.begin(),integers.end(),
    [&Value_To_Remove](int TheValue){return Value_To_Remove.count(TheValue) > 0;});
    integers.erase(new_end,integers.end());
    return integers;
}

int main()
{
    for(auto c :remove_values({1, 1, 2 ,3 ,1 ,2 ,3 ,4}, {1, 3}))
    {
        std:: cout  << c << " " ;
    }


    return 0;
}