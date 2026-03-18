#include <iostream>

enum country{Egypt =1,Iraq,Oman,jordan,qatar};

int main()
{
    country mideleast;
    int num;
    std::cout << "enter country number\n";
    std::cin >> num;
    std::cin.clear();
    mideleast = (country)num;
    if(mideleast == country::Egypt)
    std::cout << "wellcome to Egypt\n";
    else if(mideleast == country::Iraq)
    std::cout << "wellcome to Iraq\n";
    else if(mideleast == country::Oman)
    std::cout << "wellcome to Oman\n";
    else if(mideleast == country::qatar)
    std::cout << "wellcome to Qatar\n";
    else
    std::cout << "wellcome to world\n";
}