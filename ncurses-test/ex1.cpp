#include <iostream>
#include <ncurses.h>

int main()
{
	initscr();
	raw();

	keypad(stdscr,true);
	noecho();
	addstr("hello");
	move(0,0);
	int key;
	double scy,scx;
	getmaxyx(stdscr,scy,scx);
	while(key != 'q')
	{
	key = getch();
	refresh();
	if(key == KEY_UP)
	{
	attron(A_BOLD | A_BLINK );
		mvprintw(10,5,"hello");
	}
	if(key==KEY_DOWN)
	{
		mvprintw(15,10,"hello");
	}
	if(key==KEY_LEFT)
	{
		mvprintw(20,15,"hello");
	}
	if(key==KEY_RIGHT)
	{
		mvprintw(25,20,"hello");
	}
	if(key == 's')
	{
		clear();
		printw("scy: %lf scx: %lf\n",scy,scx);
	}
	refresh();
	}
	getch();
	refresh();
	endwin();
	return 0;
}

