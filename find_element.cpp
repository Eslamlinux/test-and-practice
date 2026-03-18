#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
bool find_element(std::vector<int> elements_array,int element) 
{
    std::vector<int>::iterator tofind = std::find(elements_array.begin(),elements_array.end(),element);
    if(tofind == elements_array.end())
       return false;
   return true; 
}
int main()
{
    std::cout << find_element({2,5,6,7,8,2,1},5) <<std::endl;
}
