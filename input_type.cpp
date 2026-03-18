#include <iostream>
// #include <string>
// #include <algorithm>
std::string input_type(std::string value) { 
    if(std::isalpha(value[0])) {
        return "string";
    } 
    else if(std::isdigit(value[0])) {
        if(value.find('.') != std::string::npos)
        return "double";
        return "integer";
    } 
    return "unknown";
}

int main()
{

    std::cout << input_type("Hello, World!") << std::endl;
    std::cout << input_type("12345") << std::endl;
    std::cout << input_type("1.345") << std::endl;
    std::cout << input_type("21.21") << std::endl;
    
    return 0;
}