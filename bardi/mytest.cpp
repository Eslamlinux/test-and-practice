#include <iostream>
#include <ncurses.h>

int main()
{
initscr();
int x,y,key;
keypad(stdscr,true);
noecho();
x = y = 5;
while(key != 'q')
{
clear();
move(0,0);
printw("hello scr");
move(x,y);
printw("^");
refresh();
key = getch();
if(key == KEY_LEFT)
{
	y--;
	if(y< 0) y=0;
}
if(key == KEY_RIGHT)
{
	y++;
	if(y > 50) y = 50;
}
if(key == KEY_UP)
{
	x--;
	if(x < 0) x = 0;
}
if(key == KEY_DOWN)
{
	x++;
	if(x > 40) x = 40;
}
}
endwin();
return 0;
}
