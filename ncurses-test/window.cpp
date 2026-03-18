#include <iostream>
#include <ncurses.h>

int main(int argc,char** argv)
{
int h,w,x,y;

initscr();
cbreak();
//raw();
noecho();

WINDOW* win = newwin(h = 15, w = 40, y = 5 , x = 5);
refresh();

char t = '*';
//box(win, (int)t, 104);
//box(win, 0, 0);
int left, right, top, bottom, tlc, trc, blc, brc;
left = right = '$';
top = '#';
bottom = '#'; 
tlc = trc = blc = brc = (int)t;
wborder(win,left, right, top, bottom, tlc, trc, blc, brc);
mvwprintw(win, 1, 1,"hello window");

wrefresh(win);

int c = getch();

endwin();

return 0;
}