#include <iostream>
#include <vector>
#include <iostream>

int main()
{

std::vector<int> a = {10,5,4,2,9};
a.erase(a.begin()+2);
std::cout << a[1];
}