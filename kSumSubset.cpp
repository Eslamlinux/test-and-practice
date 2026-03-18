#include <iostream>
#include <string>

bool kSumSubset(std::string dateString) { 
    std::string temp = dateString.substr(0,4);
    if(stoi(temp) > 2021 || stoi(temp) < 1825)
    return false;
    return true;
}

int main()
{
std::cout << kSumSubset("2099-08-02T00:00:00") <<std::endl;
std::cout << kSumSubset("2017-10-21T00:00:00") <<std::endl;
std::cout << kSumSubset("1111-08-29T00:00:00") <<std::endl;
std::cout << kSumSubset("3020-01-01T00:00:00") <<std::endl;

}