#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

std::vector<int> largest_smallest(std::vector<int> array_values) {  
std::sort(array_values.begin(),array_values.end(),std::greater<int>());
int largest = array_values[0];
std::sort(array_values.begin(),array_values.end());
int smallest = array_values[0]; 
return {largest,smallest};
}

int main()
{
    for(int c : largest_smallest({5,6,2,100,50,25}))
    {
        std::cout << c << " ";
    }

}