#include <iostream>
#include <string>
namespace raindrops {

std::string convert(int num)
    {
        std::string result ="";
        if (num % 3 == 0) 
            result += "Pling";
        if (num % 5 == 0) 
            result += "Plang";
        if (num % 7 == 0) 
            result += "Plong";
        return result.empty()?std::to_string(num):result;
    }
}




int main()
{
std::cout << raindrops::convert(28) << std::endl;
std::cout << raindrops::convert(30) << std::endl;

    return 0;
}