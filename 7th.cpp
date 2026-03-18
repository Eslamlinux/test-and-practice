#include <iostream>

std::string convertToBase7(int num) { 
std::string result ="";
bool Is_Minus = false;
long long nums = num;
// first 
if(nums < 0 )
{
    nums *= -1;
    Is_Minus = true;
}
else if(nums == 0)
return std::to_string(nums);

while(nums > 0)
{
    result = std::to_string(nums % 7) + result;
    nums /= 7;
}

return Is_Minus? "-" + result: result;
}

int main()
{
std::cout << convertToBase7(100) <<std::endl;
std::cout << convertToBase7(-7) <<std::endl;
std::cout << convertToBase7(-10) <<std::endl;
std::cout << convertToBase7(0) <<std::endl;
std::cout << convertToBase7(49) <<std::endl;

}
