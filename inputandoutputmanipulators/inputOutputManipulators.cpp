#include <ios>
#include <iostream>
#include <ostream>
#include <iomanip>
/*
std::endl;   <ostream>
std::flush;  <ostream>
std::setw(); <iomanip>
std::left; std::right; std::internal;  <ios>
std::setfill(); <iomanip>
std::boolalpha; std::noboolaplpha; <ios>
std::showpos; std::noshowpos;  <ios>
std::dec; std::oct; std::hex; sts::showbase; std::noshowbase; std::uppercase; <ios>
std::scientific; - std::fixed; <ios>
std::setprecision; <iomanip>
std::showpoint; std::noshopoint; <ios>
*/

int main()
{
	std::cout  << std::flush ;
	int wid = 15;
	int convpos = 8511;
	int convneg = -8511;
	double convdou = 8.511;

	double a {3.312584469899}; 
	double b = 2006.0;
	double c = 1.34e-10;

	std::cout << std::left;
	std::cout << std::setfill('-');
	std::cout  << std::setw(wid) << "First Name" << std::setw(wid) << "Last Name" << std::setw(wid) << "Your id" << std::setw(wid) << "Age" <<  std::endl; 
	std::cout << std::setfill(' ');
	std::cout << std::showpos;
	std::cout  << std::setw(wid) << "Islam" << std::setw(wid) << "Khalid" << std::setw(wid) << "10001" << std::setw(wid) << 34 <<  std::endl; 
	std::cout  << std::setw(wid) << "Hassan" << std::setw(wid) << "Khalid" << std::setw(wid) << "10003" << std::setw(wid) << 27 << std::endl; 
	std::cout << std::noshowpos;
	std::cout << std::left;
	std::cout << std::endl;
	std::cout << std::uppercase;
	std::cout << std::setw(wid) << "in Dec" << std::setw(wid) << "in hex" << std::setw(wid) << "in oct" << std::endl;
	std::cout << std::setw(wid) << std::dec << convpos << std::setw(wid) << std::hex << convpos << std::setw(wid) << std::oct << convpos << std::endl;
	std::cout << std::setw(wid) << std::dec << convneg << std::setw(wid) << std::hex << convneg << std::setw(wid) << std::oct << convneg << std::endl;
	std::cout << std::setw(wid) << std::dec << convdou << std::setw(wid) << std::hex << convdou << std::setw(wid) << std::oct << convdou << std::endl;
	
	std::cout << "\ndouble defualt \n";
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << "double fixed \n";
	std::cout <<  std::fixed;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;


	std::cout << "double scientific \n";
	std::cout << std::scientific;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << "double back to defualt \n";
	std::cout.unsetf(std::ios::scientific | std::ios::fixed) ;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

//
//	std::cout << "\nprecision \n";
//	std::cout << "defualt: " <<  a << std::endl;
//	std::cout << "precision 10= :" << std::setprecision(10) << a << std::endl;
//	std::cout << "precision 20= :" << std::setprecision(20) << a << std::endl;



	std::cout << "\nshowing point or no \n";
	double x {1.0};
	double y {0.05};
	//std::cout<< std::showbase;

	std::cout << x << std::endl << y << std::endl;
	std::cout<< std::showpoint ;
	std::cout << x << std::endl << y << std::endl;




}