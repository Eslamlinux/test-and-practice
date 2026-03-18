#include <ios>
#include <iostream>
#include <ncurses.h>

int main()
{
	initscr();
int x,y,key;
keypad(stdscr,true);
noecho();
x = y =5;

while(key != 'q')
	{
		clear();
		move(0,0);
		printw("welcome to first move game program to quit press 'q'");
		
		move(y,x);
		printw("-");
		refresh();
		
		key = getch();
		if(key == KEY_LEFT)
			{
				x--;
				if(x < 0) x = 0;
			}
		if(key == KEY_RIGHT)
			{
				x++;
				if(x > 30) x = 30;			
			}
		if(key == KEY_UP)
			{
				y--;
				if(y < 0) y=0;
			}
		if(key == KEY_DOWN)
			{
				y++;
				if(x > 30) x = 30;
			}
	}
endwin();
return 0;
}