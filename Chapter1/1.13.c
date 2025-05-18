#include <stdlib.h>
#include <stdio.h> 

#define INWORD 1
#define OUTOFWORD 0

int main () {
    int c;
    int totalLetters = 0;
    int state = OUTOFWORD;

    while ((c = getchar()) != EOF) {
        if (c == ' '|| c == '\t' || c == '\n') {
            if (state == INWORD) {
                // End of a word — print histogram
                for (int i = 0; i < totalLetters; i++) {
                    putchar('*');
                }
                putchar('\n');  // New line after the stars
                totalLetters = 0;
                state = OUTOFWORD;
            }
        } else {
            if (state == OUTOFWORD) {
                state = INWORD;
            }
            totalLetters++;  // Count the character
        }
    }

    // Handle final word (if no space after it)
    if (state == INWORD) {
        for (int i = 0; i < totalLetters; i++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
