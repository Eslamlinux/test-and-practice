#include <iostream>
#include <ncurses.h>

int main()
{
char letter;
initscr();

printw("hello in bardi\n");
refresh();

letter = getch();
clear();

//std::cout<< "you pushed: " << letter << std::endl;
printw("you pushed: '%c'",letter);
refresh();
getch();
endwin();
return 0;
}