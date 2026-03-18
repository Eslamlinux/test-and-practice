#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int max_element(vector<int> arr) { 
    std::sort(arr.begin(),arr.end(),std::greater<int>());
    return arr[0];
}

int main()
{
    std::cout << max_element({100,10,5,1000,2,3}) <<std::endl;

}