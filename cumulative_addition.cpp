#include <iostream>
#include <vector>

std::vector<int> cumulative_addition(std::vector<int> elements_array) { 
size_t sum = 0;
for(auto c: elements_array)
{
    sum += c;
}
return {sum,elements_array.size()};
}


int main()
{
for(auto c: cumulative_addition({5, 1, 2, 4, 9, 10, 200}))
{
    std::cout << c << " ";
}
    return 0;
}