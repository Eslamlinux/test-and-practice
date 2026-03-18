#include <iostream>
#include <vector>

std::vector<int>generatePascalsTriangleLinear(int num)
{
    if(num <= 0)
    return {};
    std::vector<int>result;
    std::vector<int>previous;
    for(int i = 1;i <= num; i++)
    {
        std::vector<int>current(i);
        current[0] = 1;
        current[i-1] = 1;
        for(int t = 1; t < i-1; t++)
        {
            current[t] = previous[t-1] + previous[t];
        }
        result.insert(result.end(),current.begin(),current.end());
        previous = current;
    }

    return result;
}
int main()
{
    for(int c:generatePascalsTriangleLinear(5))
    {
        std::cout << c << " ";
    }

    return 0;
}