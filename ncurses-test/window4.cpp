#include <string>
#include <ncurses.h>
void start_ncurses(bool useRaw, bool useNoecho);
void printMenu(WINDOW* menu, std::string choices[],int size, int highlight);

int main(int argc ,char** argv)
{
//to start ncurses
initscr();
noecho();
cbreak();

//to get screen size
int ymax, xmax;
getmaxyx(stdscr, ymax, xmax);

//creat a window for our input 
WINDOW* inputwin = newwin(3, xmax-12, ymax-5, 5);
box(inputwin, 0, 0);
refresh();
wrefresh(inputwin);

keypad(inputwin, true);
int c = wgetch(inputwin);
if(c == 'a')
{
	mvwprintw(inputwin, 1, 1, "you enter a!");
	wrefresh(inputwin);
}

if(c == KEY_UP)
{
	mvwprintw(inputwin, 1, 1, "you pressed Up key");
       wrefresh(inputwin);
}


if(c == KEY_DOWN)
{
	mvwprintw(inputwin, 1, 1, "you pressed DOWN key");
       wrefresh(inputwin);
}



if(c == KEY_LEFT)
{
	mvwprintw(inputwin, 1, 1, "you pressed left key");
       wrefresh(inputwin);
}


if(c == KEY_RIGHT)
{
	mvwprintw(inputwin, 1, 1, "you pressed right key");
       wrefresh(inputwin);
}



if(c == KEY_ENTER)
{
	mvwprintw(inputwin, 1, 1, "you pressed enter key");
       wrefresh(inputwin);
}



if(c == KEY_BACKSPACE)
{
	mvwprintw(inputwin, 1, 1, "you pressed space key");
       wrefresh(inputwin);
}


//make sure program waits before exiting...
getch();
endwin();


return 0;
}
