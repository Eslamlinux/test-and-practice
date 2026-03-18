#include  <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_random_func(int max)
{
    int x;
    x =rand() %max +1;
    return x;
}

int main()
{
    int random;

    srand(getpid());

    random = our_random_func(10);
    printf("the pundom is: %d\n",random);


    random = our_random_func(10);
    printf("the pundom is: %d\n",random);


    return 0;

}
