#include <iostream>
#include <vector>
#include <cmath>


bool Is_Primary(int number)
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

std::vector<int> primes_nums(std::vector<int> numbers) { 
    std::vector<int>result;
    for(int c : numbers)
    {
        if(Is_Primary(c))
        result.push_back(c);
    }
    return result;
}

int main()
{
    for(int c:primes_nums({27, 23, 5, 9})) 
    {
        std::cout << c << " ";
    }
    std::cout << std::endl;
        std::cout << sqrt(23);


}