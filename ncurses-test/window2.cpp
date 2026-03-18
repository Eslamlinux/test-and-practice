#include <iostream>
#include <ncurses.h>

int main(int argc,char** argv)
{

//start_ncurses(true,true);
initscr();
keypad(stdscr, TRUE);
int left = '#', right = '#', top = '$', bottom = '$', tlc = '*', trc = '*', blc = '/', brc = '/';
WINDOW* win = newwin(15, 40, 5, 5);
wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
box(win, 0, 0);
mvwprintw(win,1,1,"hi");
wrefresh(win);


if(!has_colors()){
std::cout << "terminal cant suport colors\n" ;
getch();
return -1;
}
start_color();
init_pair(1, COLOR_CYAN, COLOR_WHITE);
init_pair(2, COLOR_YELLOW, COLOR_MAGENTA);

if(can_change_color()){
printw("can chang color\n");
init_color(COLOR_CYAN, 9, 999, 999);
}

attron(COLOR_PAIR(1));
printw("color cyan and white\n");
attroff(COLOR_PAIR(1));

attron(COLOR_PAIR(2));
printw("color OLOR_YELLOW, COLOR_MAGENTA\n");
attroff(COLOR_PAIR(2));

attron(A_INVIS);
printw("password");
attroff(A_INVIS);

attron(A_REVERSE);
printw("\nA REVERSE");
attroff(A_REVERSE);

attron(A_NORMAL);
printw("\nA NORMAL");
attroff(A_NORMAL);

attron(A_BLINK);
printw("\nA_BLINK");
attroff(A_BLINK);

attron(A_HORIZONTAL);
printw("\n A_HORIZONTAL");
attroff(A_HORIZONTAL);

attron(A_BOLD);
printw("\n A_BOLD");
attroff(A_BOLD);

attron(A_DIM);
printw("\n A_DIM");
attroff(A_DIM);

attron(A_VERTICAL);
printw("\n A_VERTICAL");
attroff(A_VERTICAL);

attron(A_COLOR);
printw("\n A_COLOR");
attroff(A_COLOR);

attron(A_PROTECT);
printw("\n A_PROTECT");
attroff(A_PROTECT);

attron(A_ALTCHARSET);
printw("\n A_ALTCHARSET");
attroff(A_ALTCHARSET);

attron(A_ATTRIBUTES);
printw("\n A_ATTRIBUTES");
attroff(A_ATTRIBUTES);


refresh();


getch();
endwin();
return 0;
}