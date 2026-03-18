#include <iostream>
#include <string>

float convertPercent(std::string percentage) { 
return stoi(percentage.substr(0,2)) /100.0;
}

int main()
{
    std::cout << convertPercent("30%") <<std::endl;
    return 0;
}