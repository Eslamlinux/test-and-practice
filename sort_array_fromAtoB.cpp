#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
std::vector<int> sort_array(std::vector<int> my_array,std::string typeParam)
{ 
if(typeParam == "A")
std::sort(my_array.begin(),my_array.end());
else
std::sort(my_array.begin(),my_array.end(),std::greater());
return my_array;
}
int main()
{
for(auto c: sort_array({63,12,43,56,12}, "A"))
        {
    std::cout << c << " ";
        }

return 0;
}
