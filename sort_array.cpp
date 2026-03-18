#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> sort_array(std::vector<int> elements_array)
{ 
    std::sort(elements_array.begin(),elements_array.end());
return elements_array;
}

int main()
{
    for(auto c:sort_array({63,12,43,56,12}))
    {
        std::cout << c << " ";
    }
    return 0;
}
