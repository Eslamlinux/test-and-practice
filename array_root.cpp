//array_root
#include <iostream>
#include <cmath>
#include <vector>

std::vector<float> array_root(std::vector<float> arr) { 
std::vector<float> result;
for(float c: arr)
{
    result.push_back(sqrt(c));
}
return result;
}

int main()
{
    for(auto c: array_root({3, 5, 7 , }))
    {
        std:: cout << c << " ";
    }

    return 0;
}