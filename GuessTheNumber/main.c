#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int random_num(int Max_Num)
{
    int num;
    num = rand() % Max_Num+1;
    return num;
}
int main()
{
    int balance, bet, guess, dice;
    srand(getpid());
    balance = 1000;
    while(1)
    {
    printf("give some of your point: ");
    fflush(stdout);
    scanf("%d",&bet);
    printf("make your guess (1-6, and 0 means quit): \n");
    scanf("%d", &guess);
    if(guess == 0)
        return 0;
    printf("throwing the dice ...\n");
    sleep(2);
    dice = random_num(6);
    printf("Dice result:  %d\n",dice);
    
    if(guess != dice)
    {
        balance -= bet;
    printf("sorry you lost\n");
    }
    else
    {
        bet *= 3;
        balance += bet;
        printf("you won congrats\n");
    }

    if(balance == 0)
    {
        printf("Game Over\n");
        return 0;
    }

    printf("balnce : %d points\n" ,balance);
    }

    return 0;
    
}
