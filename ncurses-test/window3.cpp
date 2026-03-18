#include <iostream>
#include <ncurses.h>
#include <string>

void start_ncurses(bool useRaw, bool useNoecho);
void printMenu(WINDOW* nenu, std::string choices[],int size, int highlight);

int main(int argc,  char** argv)
{

// NCURSES START
initscr();
noecho();
cbreak();

int y, x, ybeg, xbeg, ymax, xmax;
WINDOW* win = newwin(10, 20 , 10, 10);

getyx(stdscr, y, x);
getbegyx(stdscr,ybeg ,xbeg);
getmaxyx(stdscr,ymax ,xmax);

mvprintw(ymax/2, xmax/2, "%d %d", ybeg, xbeg);

printw("%d %d %d %d %d %d",y,x,ybeg,xbeg,ymax,xmax);

// make sure program waits befor exiting..

getch();
endwin();



return 0;

}
