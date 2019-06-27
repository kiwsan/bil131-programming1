//Headers and binaries

/*
note: This is an advanced example 
      You need to add "-lcurses" to complie command
      ex: gcc -lcurses 11_headers_and_binaries2.c -o <name>
*/

#include <stdio.h>

//ncurses is an external library and it is not included in c
#include <ncurses.h>

int main() {

    /*
    ncurses fucntions.
    you don't need to understand but remember these function are in a sperate library.
    */

	initscr();
    endwin();

    return 0;
}