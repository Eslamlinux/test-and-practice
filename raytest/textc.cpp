#include <iostream>


int main()
{
std::string name = "eslam";


int i = 5;
while(i >0)
{
    std::cout << i << " " << name << " ";
i--;
}

int x =5;

x = x++ + ++x;
std::cout<< "\n" << x;
}