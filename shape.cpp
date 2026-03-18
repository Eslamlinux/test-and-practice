/*
To find the volume (centimeters cubed) of a cuboid you use the formula:

volume = Length * Width * Height

But someone forgot to use proper record keeping, so we only have the volume, and the length of a single side!

It's up to you to find out whether the cuboid could have equal sides (could be a cube).

Return true if the cuboid could have equal sides, return false otherwise.

Return false for invalid numbers too (e.g volume or side is less than or equal to 0).

Note: side will be an integer
*/
#include <iostream>
#include <cmath>
bool is_cube(int volume, int side)
{
    return  pow(side,3) == volume && side > 0 && volume > 0;
}

int main()
{
    std::cout << is_cube(8,2) << std::endl;
    return 0;
}