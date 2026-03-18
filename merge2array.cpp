#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> mergeAndOrder(std::vector<int> array1,std::vector<int> array2) { 
    std::vector<int> result (array1);
    result.insert(result.end(),array2.begin(),array2.end());
    sort(result.begin(),result.end());
    return result;
}

int main()
{
    mergeAndOrder({1,2},{3,4});
}