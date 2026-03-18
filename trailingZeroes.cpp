//trailing Zeroes
#include <iostream>

int trailingZeroes(int n) 
{ 
int result =0 ;
while(n > 0)
{
    n/= 5;
    result += n;
}
return result;
}

int main()
{
std::cout << trailingZeroes(25) <<std::endl;
}