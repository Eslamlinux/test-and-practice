#include <iostream>
#include <vector>

std::vector<int> filp_even_odd(std::vector<int> numbers) { 
    for(int& c :numbers)
    {
        if(c % 2 == 0)
        c ++;
        else
        c--;
    }
    return numbers;
}

int main()
{
    std::vector<int> vec ={73, 221, 52, 214};
    for(int c: filp_even_odd(vec))
    {
        std::cout << c << " ";
    } 
        

}