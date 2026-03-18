#include <iostream>
#include <vector>

int sumOdd(std::vector<int> arr) { 
size_t result = 0;
    for(int c: arr)
    {
        c %2 == 1? result += c:0 ; 
    }
return result ;
}

int main()
{
    std::cout << sumOdd({2, 9, 5, 4, 0}) << std::endl;


    return 0;
}