#include <stdlib.h>
#include <stdio.h>

int main() {

    int c;
    int characterCounter;
    int lineCounter;
    int tabCounter;
    int blankCounters;
    

    while((c = getchar()) != EOF) {
        characterCounter++;

        if(c == '\n') {
            lineCounter++;
        } else if (c == '\t'){
            tabCounter++;
        } else if (c == ' ') {
            blankCounters++;
        }
    }

    printf("Total Characters: %d\n", characterCounter);
    printf("How many new lines were made: %d\n", lineCounter);
    printf("How many new tabs were made: %d\n", tabCounter);
    printf("How many new blanks were made: %d\n", blankCounters);


    return 0;
}