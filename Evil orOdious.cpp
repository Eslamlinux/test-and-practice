/*
The number n is Evil if it has an even number of 1's in its binary representation.
The first few Evil numbers: 3, 5, 6, 9, 10, 12, 15, 17, 18, 20

The number n is Odious if it has an odd number of 1's in its binary representation.
The first few Odious numbers: 1, 2, 4, 7, 8, 11, 13, 14, 16, 19

You have to write a function that determine if a number is Evil of Odious, function should return "It's Evil!" in case of evil number and "It's Odious!" in case of odious number.

good luck :)


*/
#include <iostream>
std::string evil(int n)
{
    std::string Od = "It's Odious!" , ev = "It's Evil!";
    int Count = 0;
    while(n > 0)
    {
        n &= (n -1);
        Count++;
    }
    return Count % 2? Od : ev;
}
int main()
{
int a = 3;
std::cout <<  (a + '0') <<std::endl;
std::cout << evil(1) <<std::endl;
std::cout << evil(2) <<std::endl;
std::cout << evil(3) <<std::endl;
std::cout << evil(7) << std::endl;
    return 0;
}