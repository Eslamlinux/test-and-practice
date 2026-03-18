#include <iostream>
#include <string>
using namespace std;

string is_t_same(string name1,string name2) { 
return name1 == name2? "متشابهتين":"غير متشابهتين";
}

int main()
{
std::cout << is_t_same("Anas","anas") << std::endl;
std::cout << is_t_same("Abdullah","Abdullah") << std::endl;

}