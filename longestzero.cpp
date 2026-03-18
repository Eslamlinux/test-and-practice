#include <iostream>
using namespace std;

string longestZero(string strParam) { 
std::string result ,temp;
for(int i = 0; i < strParam.length(); i++)
{
    if(strParam[i] == '0')
    {
        temp += '0';
    }
    else
    {
        if(temp.length() > result.length())
        result =temp;
        temp = "";
    }
}
return result;
}
int main()
{
    std::cout << longestZero("011100001000001100") <<std::endl;
}