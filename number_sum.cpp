#include <iostream>
#include <cmath>
using namespace std;

int number_sum(int num) { 
    size_t sum = 0;
    for(int i = 1; i <= num;i++)
    {
        sum += i;
    }
    return sum;
}

int main()

{
std::cout << number_sum(3) << std::endl;
std::cout << number_sum(13) << std::endl;
std::cout << number_sum(15) << std::endl;

}