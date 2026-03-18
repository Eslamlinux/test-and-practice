#include <iostream>

std::string numbers_range(int number) { 
    std::string result;
    for(int i = 0; i<=number ;i++)
    {
        result+= std::to_string(i) +" ";
    }
    result.pop_back();
    return result;
}
