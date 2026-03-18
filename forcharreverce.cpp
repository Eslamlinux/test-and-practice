#include <iostream>



int main()
{

    std::string str {"Hello World!"};

    for (auto &a : str) {
        if(a == ' ') a = '_';
    }

    std::cout << str << std::endl;

    return 0;
}