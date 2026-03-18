#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(10) << "Hello" << std::endl;
    std::cout << std::setw(10) << "world" << std::endl << std::flush;

    std::cout << std::setfill('*');
    std::cout << "Hello" << std::setw(10) << " From" << std::setw(10) << " Egypt" << std::endl << std::flush;
    std::cout << std::left;
    std::cout << "Hello" << std::setw(10) << " From" << std::setw(10) << " Egypt" << std::endl << std::flush;


    std::cout << std::right;
    std::cout << std::setw(10) << -2.5 << std::endl;
    std::cout << std::internal << std::setw(10) << -2.5 << std::endl;

        std::cout << std::left;
    std::cout << std::setw(10) << -2.5 << std::endl;
    std::cout << std::internal << std::setw(10) << -2.5 << std::endl;


    std::cout << std::setfill(' ');
        std::cout << std::right;
    std::cout << std::showpos;
    std::cout << std::internal << std::setw(10) << 2.5 << std::endl;

    int a {10};
    std::cout << std::uppercase;
    std::cout << std::dec << a << std::endl;
    std::cout << std::hex << a << std::endl;
    std::cout << std::oct << a << std::endl;





    double x = 3.5678;
    double y = 305.5678;
    double z = 1.5;

    std::cout << "===================\n";
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl << std::flush;
    std::cout << "===================\n" << std::fixed;
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl << std::flush;

    std::cout << "===================\n" << std::scientific;
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl << std::flush;

    
   std::cout.unsetf(std::ios::scientific |std::ios::fixed);

    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl << std::flush;



}