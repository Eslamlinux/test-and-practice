#include <iostream>
#include <fstream>



int main()
{

std::ofstream file1("file1.txt");
file1 << "hello eslam\n" ;
file1 << "cool eslam\n" ;
file1.close();
std::string line;
std::ifstream readfile1("file1.txt");
getline(readfile1,line);
std::cout << line << std::endl;
std::cout << line << std::endl;


    return 0; 
}
#include <iostream>
#include <fstream>



int main()
{

std::ofstream file1("file1.txt");
file1 << "hello eslam\n" ;
file1 << "cool eslam\n" ;
file1.close();
std::string line;
std::ifstream readfile1("file1.txt");
getline(readfile1,line);
std::cout << line << std::endl;
std::cout << line << std::endl;


    return 0; 
}
