//oct_to_dec
#include <iostream>
#include <cmath>
#include <vector>
int oct_to_dec(int octal_number) { 

    std::string numtostr = std::to_string(octal_number);
    std::vector<int> power;
    int res =0;
    for(int i = 0; i < numtostr.size(); i++)
    {
        power.insert(power.begin(),pow(8,i));
    }

    for(int i = 0 ;i < power.size();i++)
    {
        res += power[i] * (numtostr[i] - '0');

    }
    return res;
}

int main()
{
    std::cout << oct_to_dec(4444) <<std::endl; // 5252 2730  /4444
    std::cout << oct_to_dec(8888) <<std::endl; // 5252 2730  /4444
    return 0;
}



