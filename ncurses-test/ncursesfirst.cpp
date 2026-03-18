#include <iostream>
#include <ncurses.h>
#include <ncurses.h>

int main() {
    initscr();
    curs_set(0);    
    noecho(); 
  	move(3,0);  
	int sy,sx;
	getmaxyx(stdscr,sy,sx);
	printw( "size y %d size x %d ",sy,sx);
	addstr("hello world add str use\n");
	move(4,25);
	addch('c');
	move(6,35);
	printw("\nhi\n");
	mvprintw(7,0,"move and print w\n");
	mvaddstr(8,0,"add and movw str\n");
	mvaddch(9,0,'c');
	refresh();
	getch();
    endwin();
    return 0;
}
