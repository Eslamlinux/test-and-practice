#include <iostream>
#include <vector>

int increasing_array(std::vector<int> arr) { 
int point = 0;
for(int i= 1; i < arr.size();i++)
{
    int temp = arr[i-1];
    if(arr[i] < temp)
    {
        point += (temp - arr[i]);
        arr[i] = temp;
    }
}
return point;
}

int main()
{
    std::cout << increasing_array({3, 2, 5, 1, 7}) <<std::endl;
}