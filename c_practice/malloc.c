#include <stdio.h>
#include <stdlib.h>



int main()
{
char *name;
name = malloc(6);
scanf("%s",name);
printf("%s",name);

free(name);

return 0;

}
