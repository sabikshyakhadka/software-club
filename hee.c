#include <stdio.h>
#include <conio.h>  // for _getch() on Windows; use <ncurses.h> on Linux

int main() {
    int number = 0;
    char ch;

    printf("Swipe Simulation (use 'a' for left, 'd' for right, 'q' to quit)\n");
    printf("Current number: %d\n", number);

    while (1) {
        ch = _getch();  // waits for a key press

        if (ch == 'a') {          // simulate swipe left
            number--;
            printf("Swipe Left → Number: %d\n", number);
        } else if (ch == 'd') {   // simulate swipe right
            number++;
            printf("Swipe Right → Number: %d\n", number);
        } else if (ch == 'q') {   // quit
            printf("Exiting...\n");
            break;
        }
    }

    return 0;
}