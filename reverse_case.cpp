#include <iostream>
using namespace std;

string reverse_case(string strParam) { 
std::string result ;
for(auto c : strParam)
{
    if(isupper(c))
    result += tolower(c);
    else
    result += toupper(c);
}
return result;
}
