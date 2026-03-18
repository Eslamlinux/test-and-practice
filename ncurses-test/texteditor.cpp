#include <iostream>
#include <ncurses.h>


int main()
{
initscr();
cbreak();

keypad(stdscr, TRUE);
noecho();
printw("hello and welcome to my text editor 0.01\n");

refresh();
int ch;
while((ch = getch()) != 'q')
{
	std::string entry;
	//std::getline(std::cin,entry);
	//addstr(entry);
	getnstr(entry,15);
	//printw(entry);
	refresh();
}


endwin();
return 0;
}
