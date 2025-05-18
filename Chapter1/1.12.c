#include <stdio.h>

#define IN 1
#define OUT 0

int main () {
     int c, newLine, newWord, newChar, currentState;

    
    while((c = getchar()) != EOF) {
        if(c != ' ') {
            putchar(c);
        } else if (currentState == OUT){
            currentState == OUT;
            printf("\n");
        }


    }

    printf("\nTotal words entered: %d", newWord);
    printf("\nTotal lines entered: %d", newLine);
    printf("\nTotal characters entered: %d", newChar);
    
    return 0;
    }

