#include <iostream>
#include <vector>
std::vector<int> sub_arrays(std::vector<int> arr1,std::vector<int> arr2) { 
for(int i = 0; i < arr2.size(); i++)
{
    arr2[i] = arr2[i] - arr1[i];
}
return arr2;
}
int main()
{
for(auto c: sub_arrays({2,4,88},{4,2,88}))
{
    std::cout << c << " ";
}        

return 0;
} 
