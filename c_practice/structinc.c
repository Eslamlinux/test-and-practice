#include <stdio.h>

typedef struct
{
char string[6];
int num ;

}stdc;
int main()
{
	stdc str;

	str.string[0] = 'e';
	str.string[1] = 's';
	str.string[2] = 'l';
	str.string[3] = 'a';
	str.string[4] = 'm';

	printf("\nstring = %c \n", str.string[0]);
	printf("string = %c \n", str.string[1]);
	printf("string = %c \n", str.string[2]);
	printf("string = %c \n", str.string[3]);
	printf("string = %c \n", str.string[4]);

	char st[] = {'e','s','l','a','m'};
	printf("\nst = %c \n", st[0]);
	printf("st = %c \n", st[1]);
	printf("st = %c \n", st[2]);
	printf("st = %c \n", st[3]);
	printf("st = %c \n", st[4]);

	char name[] = "eslam";
	for(int i = 0; i < name.size();i++)
	{
	printf("name = %c \n", name[i]);
	}
	
}
