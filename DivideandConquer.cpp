/*
Given a mixed array of number and string representations of integers, add up the non-string integers and subtract the total of the string integers.

Return as a number.
*/
#include<iostream>
#include <variant>
#include <vector>
#include <variant>

int divCon(const std::vector<std::variant<int, char>>& x) {
    int result = 0;
    for(auto c :x)
    {
        // if(std::holds_alternative<int>(c))
        // result += std::get<int>(c);
        // if(std::holds_alternative<char>(c))
        // result -= std::get<char>(c)- '0';

        // std::holds_alternative<int>(c)? result += std::get<int>(c) : result -= std::get<char>(c)- '0';
        
        result += std::get_if<int>(&c) ? std::get<int>(c) : '0' - std::get<char>(c);

    }
  return result;
}

int main()
{
    std::cout<< divCon({ '5', '0', 9, 3, 2, 1, '9', 6, 7 }) << std::endl;

    return 0;
}