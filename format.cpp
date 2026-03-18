#include <iostream>
#include <iomanip>

int main()
{
	std::cout << "Nice message..." << std::endl;
	std::cout << "Nice message..." << std::endl << std::flush;
	std::cout << std::setw(25) << "After 25" <<std::setw(10) << "After 10" << std::setw(25) << "After 25" << std::endl;
return 0;
}
