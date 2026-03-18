#include <iostream>
#include <vector>
#include <cmath>

bool is_primary(int number)
{
    if(number ==1)
    {
        return false;
    }
    int the_end = sqrt(number);
    for(int i = 2; i <= the_end; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> getPrimesBetween(int a,int b) { 
    std::vector<int>result;
    for(int i = a; i <= b;  i++)
    {
        if(is_primary(i))
        {
            result.push_back(i);
        }
    }
    return result;
}


int main()
{

    for(auto c: getPrimesBetween(53,67))
    {
        std::cout << c << " ";
    }
    std::cout<<std::endl;

    for(auto c: getPrimesBetween(20,50))
    {
        std::cout << c << " ";
    }
    std::cout<<std::endl;
    //  std::cout<< sqrt(4);

    return 0;
}