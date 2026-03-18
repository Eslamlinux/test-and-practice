#include <iostream>
#include <cmath>

int main()
{
double weight {7.5};
double savings {-5000};
std::cout << "abs test\n";
std::cout << abs(savings) << std::endl;
std::cout << abs(weight) << std::endl;
std::cout << "\nceil and floor test\n";
std::cout << ceil(weight) << std::endl;
std::cout << floor(weight) << std::endl;

double exptional = std::exp(10);
std::cout << std::endl << "exptional: " << exptional << std::endl; 
std::cout << "sqrt: " << std::sqrt(10) << std::endl;

std::cout << "pow: " <<std::pow(2,2) << std::endl;

std::cout << "log10: " << std::log10(10000) << std::endl;
std::cout <<"\nround test\n";
std::cout << std::round(3.654) <<std::endl;
std::cout << std::round(2.5) <<std::endl;
std::cout <<std::round(2.4) << std::endl;

return 0;
}