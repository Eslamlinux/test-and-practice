#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Hello\tworld\n";
    std::cout << std::setw(10) << "Hello" << std::setw(10) << "world" <<std::setw(5) << std::endl;
}
