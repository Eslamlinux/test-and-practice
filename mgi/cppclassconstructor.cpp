#include <iostream>
class pri
{
    public:
pri()
{
    std::cout << "defult const\n";
}

~pri(){};
};
int main()
{

    pri obj1;


    return 0;
}