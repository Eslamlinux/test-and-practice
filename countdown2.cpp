#include <iostream>
using namespace std;

string countDown(int number) { 
std::string result;
for(int i = number; i >= 0 ; i-- )
{
    result += to_string(i) + " ";
}
result.pop_back();
return result;
}
