#include <iostream>
#include <cmath>

float cone_volume(float radius,float height) { 
    return (pow(radius,2)*1/3) * 3.14159 * height;
}

int main()
{
std::cout << cone_volume(1.3,5.2) << std::endl;
std::cout << cone_volume(8.7,7.8) << std::endl;

    return 0;
}