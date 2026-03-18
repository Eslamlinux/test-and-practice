#include <stdio.h>
#include <string.h>

struct persons
{
    char Name[10];
    char Last_Name[10];
    int age;
};


int main()
{
    struct persons eslam;
    strncpy(eslam.Name,"moham",6);
    strncpy(eslam.Last_Name,"salahh",7);
    eslam.age = 34;


  printf("First Name: %s \nLast Name: %s \nage: %d ",eslam.Name, eslam.Last_Name, eslam.age);


    return 0;
}
