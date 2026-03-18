#include <iostream>

int sum(int a,int b)
{
    return a + b;
}

int def(int a,int b)
{
    return a / b;
}
int m(int a,int b){return a * b;}


int (*ptrtosum)(int,int) = sum ;
int (*ptrtodef)(int,int) = def ;
int (*ptrtomult)(int,int) = m ;

#define mult ptrtomult  //define to the ptr


int main()
{

    int res = ptrtosum(5,5);
    std::cout << res <<std::endl; 
    res = ptrtodef(20,4);
    std::cout << res <<std::endl; 
    std::cout << mult(5,5);

}