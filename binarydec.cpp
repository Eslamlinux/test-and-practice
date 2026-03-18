#include <iostream>
#include <chrono>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
    bool work = true;

std::vector<int> To_Binary(std::string& str)
{
    std::vector<int>result;
        for(char c :str)
    {
        if(isalpha(c)) break;
    }
    int Decimal = stoi(str);
    while(Decimal > 0)
    {
        Decimal % 2 == 0?result.insert(result.begin(),0):result.insert(result.begin(),1);
        Decimal /= 2;
    } 
    return result;
}
std::string To_Binary_dir(std::string strtonum)
{
    std::string result;
    for(auto c: To_Binary(strtonum))
    {
        result += std::to_string(c);
    }
    return result;
}

int To_Decimal(std::string str)
{
    std::vector<int> bits;
    int sum = 0;
    for(char c :str)
    {
        if(isalpha(c)) break;
        bits.insert(bits.begin(),c - '0');
    }
    for(int i = 0;i < bits.size();i++)
    {
        sum += pow(2,i) * bits[i] ;
    }
    return sum;
}
int oct_to_dec(std::string octal_number) { 
    std::vector<int> power;
    int res =0;
    for(int i = 0; i < octal_number.size(); i++)
    {
        power.insert(power.begin(),pow(8,i));
    }
    for(int i = 0 ;i < power.size();i++)
    {
        res += power[i] * (octal_number[i] - '0');

    }
    return res;
}

int dec_to_oct(std::string dec)
{
    std::string result;
    int decimal = std::stoi(dec);
    while(decimal >0)
    {
        result = std::to_string(decimal % 8) + result;
        decimal /= 8; 
    }
    return std::stoi(result);
}
void Get_entry()
{
    std::cout << "please chose what do you want to convert from " << std::endl;
    std::cout << "decimal to binary chose [1] " << std::endl;
    std::cout << "binary to decimal chose [2] " << std::endl;
    std::cout << "octal to decimal chose [3] " << std::endl;
    std::cout << "decimal to octal chose [4] " << std::endl;
    std::cout << "Exit chose [5] " << std::endl;
    char chose;
    std::string entry;
    std::cin >> chose;
    if(chose == '1')
    {
        system("clear");
    std::cout << "please enter decimal to convert: " ;
    std::cin >> entry;
    std::cout << "you convert frome "<< entry << " To "  ;
    for(auto c:To_Binary(entry))
    {
        std::cout << c;
    }
        std::cout <<" binary\n" ;
    }
    else if(chose == '2')
    {
        system("clear");
    std::cout << "please enter binary to convert: " ;
    std::cin >> entry;
    std::cout << "you convert frome "<< entry << " To " << To_Decimal(entry) << " decimal\n";
    }
        else if(chose == '3')
    {
        system("clear");
    std::cout << "please enter octal to convert: " ;
    std::cin >> entry;
    std::cout << "you convert frome "<< entry << " To " << oct_to_dec(entry) << " decimal\n";
    }
            else if(chose == '4')
    {
        system("clear");
    std::cout << "please enter decimal to convert: " ;
    std::cin >> entry;
    std::cout << "you convert frome "<< entry << " To " <<dec_to_oct(entry) << " oct\n";
    }
    else 
    {
        system("clear");
        std::cout << "Godbey :)\n";
        work = false;
    }
}
int main()
{
    while (work)
    {
        Get_entry();
    }
    
 
    return 0;
}