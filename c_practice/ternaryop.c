#include <stdio.h>

void main()
{
    int a,b;
    printf("enter a tow num\n");
    scanf("%d%d",&a,&b);
    if(a <= 0||b <= 0)
    return;
    float res = a > b?a/b:b/a;

    printf("result %d / %d =: %f",a,b,res);
}