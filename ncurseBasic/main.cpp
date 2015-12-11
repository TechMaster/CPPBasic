#include <iostream>
#include <ncurses.h>
using namespace std;

void helloWorld();
void helloColorWorld();
int main() {
    initscr();			// Start curses mode
    helloColorWorld();
    refresh();			// Print it on to the real screen
    getch();			// Wait for user input
    endwin();
    return 0;
}

void helloWorld() {
    mvprintw(20, 20, "Hello World !!!");
}

void helloColorWorld() {
    if(has_colors() == FALSE)
    {	endwin();
        printf("Your terminal does not support color\n");
        exit(1);
    }
    start_color();			/* Start color 			*/
    init_pair(1, COLOR_RED, COLOR_BLACK);

    attron(COLOR_PAIR(1));
    mvprintw(20, 20, "Hello World !!!");
    attroff(COLOR_PAIR(1));
}