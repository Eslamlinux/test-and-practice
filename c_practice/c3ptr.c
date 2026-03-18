#include <stdio.h>

void coutt(int num)
{
    printf("\nthe %d sqrt is: %d ",num,num*num);
}
void pstr(char* str)
{
    printf("%s",str);
}
int main()
{
//     int a = 10;
//     char c = 'b';
//     void* ptr ;
//     ptr = &a;

// int* d;
// printf("ptr: %d ",d);

// void (* ptr)(int) = &coutt;
// coutt(10);
// ptr(5);

// char name[] ="eslam";

// printf("\nname: %s\n",name);

// int pnum;
// char st[] = "enter a number\n";

// pstr(st);

// scanf("%d",&pnum);

// ptr(pnum);

unsigned unum = 999999999;

printf("\nunsigned num is: %u", unum);
printf("\nSize of unsigned: %d", sizeof(unum));

}