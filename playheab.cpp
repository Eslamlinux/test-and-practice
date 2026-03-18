#include <iostream>

struct te
{
void toto()
{
    std::cout << "hi from st\n";
}
enum personl
{
    Name,add,age,phone
};
enum Home
{
    personl , color,part
};
};

int main()
{
te a1;
std::string n = "e";
a1.Name = n;
std::cout << a1.Name ;

    return 0;
}