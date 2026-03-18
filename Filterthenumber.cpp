//Filter the number
#include <string>
#include <iostream>


long long filter_string(const std::string &value)
{
//     long long result =0;
//     for(auto c : value)
//     {
//        if(isdigit(c))
//        result = (result * 100 /10) + c -'0' ;
//     }
//     return result;

    std::string temp;
    long long result =0;
    for(auto c : value)
    {
       if(isdigit(c))
       temp += c;
    }
    return stoll(temp);
}

int main()
{
    std::cout << filter_string("a1b2c3") << std::endl;
    return 0;
}