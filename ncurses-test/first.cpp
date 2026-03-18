

#include <iostream>
#include <ncurses.h>
using namespace std;
int main(int argc , char** argv)
{
int x =10, y=10;

initscr();

move(x,y);
printw("the first");

refresh();

int c = getch();

move(0,0);

printw("%d", c);

getch();

endwin();

	return 0;
}
