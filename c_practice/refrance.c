#include <stdio.h>

void sum(int a,int b,int *result)
{
    *result = a + b; 
}
int main()
{
    int sumresult;
    
    sum(5,6,&sumresult);


    printf("%d",sumresult);
}
