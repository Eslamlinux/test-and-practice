#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int a = 7;
int b = 2;
int result = a + b;
int num = 1;

 printf("result == %d \n",result);
 result = a * b;
 printf("result == %d \n",result);

 char letter;
 printf("\tletter\tdecimal\thexdecimal\n\n");
 for(letter - 32; letter < 127; letter++)
 printf("\t%c\t%d\t%x\n",letter,letter,letter);
 system("pause");





}
