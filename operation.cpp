#include <iostream>
using namespace std;

string operation(int num1,int num2) { 
    if(num1 / num2 == 24 || num2 / num1 == 24)
    return "divided";
    else if(num1 * num2 == 24)
    return "multiplied";
    else if(num1 + num2 == 24 || num2 + num1 == 24)
    return "added";
    else if(num1 - num2 == 24 || num2 - num1 == 24)
    return "subtracted";
    else
    return "None";
}
int main()
{
    std::cout << operation(24,1) << std::endl;

}