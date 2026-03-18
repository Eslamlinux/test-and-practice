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
WINDOW* menuwin = newwin(6, xmax-12, ymax-8, 5);
box(menuwin, 0, 0);
refresh();
wrefresh(menuwin);

//makes it so we can use arrow keys
keypad(menuwin, true);
std::string choices[3] = {"walk", "jog", "Run"};
int choice;
int highlight =0;

while(1)
{
	for(int i = 0 ; i < 3; i++)
	{
		if(i == highlight)
		wattron(menuwin, A_REVERSE);
		mvwprintw(menuwin, i+1, 1, choices[i].c_str());
		wattroff(menuwin, A_REVERSE);
	}
	choice = wgetch(menuwin);

	switch(choice)
	{
		case KEY_UP:
			highlight--;
			if(highlight == -1)
				highlight =0;
			break;
		case KEY_DOWN:
			highlight++;
			if(highlight == 3)
				highlight = 2;
			break;
		defult: 
			break;
	}
if(choice == 10)
	break;
}
printw("your choice was: %s", choices[highlight].c_str());
int c = wgetch(menuwin);
wrefresh(menuwin);
refresh();
if(c == KEY_ENTER)
{
	return 1;
}
make sure program waits before exiting...
getch();
endwin();


return 0;
}
