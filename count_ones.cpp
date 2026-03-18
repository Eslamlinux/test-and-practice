#include <iostream>
using namespace std;

int count_ones(int num) { 
    int One_Counter = 0;
    while(num > 0)
    {
        num % 2 == 0? 0 : One_Counter++;
        num /= 2;
    }
    return One_Counter;
}

int main()
{

    cout <<count_ones(100);
    return 0;
}