#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> gravity_flip(std::vector<int> columns) { 
     std::sort(columns.begin(),columns.end());
     return columns;
}

int main()
{
    for(auto c:gravity_flip({3, 2, 1, 2}))
    {
        std::cout<< c << " ";
    }
}