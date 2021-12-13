#include <ncurses.h>
#include <windows.h>

int main()
{
	
	initscr();
	int n;
	int l;
	const char *noel[7]={"NAUFAL","NAUFAL ELLIANDO","NAUFAL ELLIANDO FATAHILLAH","NAUFAL ELLIANDO FATAHILLAH.",
	"NAUFAL ELLIANDO FATAHILLAH..","NAUFAL ELLIANDO FATAHILLAH...","NAUFAL ELLIANDO FATAHILLAH...."};
	
	for(n=0;n<3;n++){
		mvprintw(13, 45, "L O A D I N G");
		Sleep(500);
		refresh();
		clear();
		mvprintw(13, 45, "L O A D I N G .");
		Sleep(500);
		refresh();
		clear();
		mvprintw(13, 45, "L O A D I N G . .");
		Sleep(500);
		refresh();
		clear();
		mvprintw(13, 45, "L O A D I N G . . .");
		Sleep(500);
		refresh();
		clear();
		mvprintw(13, 45, "L O A D I N G . . . .");
		Sleep(500);
		refresh();
		clear();
	}
	for(l=0;l<=7;l++){
		mvprintw(13, 45, noel[l]);
		Sleep(500);
		refresh();
		clear();
	}
	refresh();
	getch();
	endwin();
}
