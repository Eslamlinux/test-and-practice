#include <iostream>

bool isMirrored(int num) { 
    std::string str = std::to_string(num);
    for(int i = 0; i < str.size() /2;i++)
    {
        if(str[i] != str[str.size() - 1 -i])
        return false;
    }
    return true;
}

int main()
{
    std::cout << isMirrored(121) << std::endl;
    return 0;
}