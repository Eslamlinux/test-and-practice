#include <iostream>
#include <ncurses.h>

int main()
{
int y,x;
initscr();
clear();

getyx(stdscr,y,x);
printw("x=%d\n""y=%d",x,y);
refresh();
y=5; 
x = 10;
move(y, x);
printw("over here");
refresh();



getch();
endwin();

return 0;
}