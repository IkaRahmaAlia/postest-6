#include <ncurses\ncurses.h>
#include <iostream>
#include <windows.h>

using namespace std;

void menu(){
	refresh();
	Sleep(700);
	clear();
}

int main(){
	initscr();
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_WHITE);
	attron (COLOR_PAIR(1));
	
	printw("ika rahma alia");
	menu();
		printw("Ika rahma alia");
	menu();
		printw("iKa rahma alia");
	menu();
		printw("ikA rahma alia");
	menu();
		printw("ika Rahma alia");
	menu();
		printw("ika rAhma alia");
	menu();
		printw("ika raHma alia");
	menu();
		printw("ika rahMa alia");
	menu();
		printw("ika rahmA alia");
	menu();
		printw("ika rahma Alia");
	menu();
		printw("ika rahma aLia");
	menu();
		printw("ika rahma alIa");
	menu();
		printw("ika rahma aliA");
	menu();

	attroff (COLOR_PAIR(1));
	
	getch;
	endwin;
}
