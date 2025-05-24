/*
Write a program that reads from stdin and counts:
Number of lines
Number of words
Number of characters
Use only getchar() — no strings or buffers.
*/
//Time start: 7:20
//Time done: 7:34

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() {

    int lc;
    int wc;
    int cc; 
    int c = 0;
    int inword = 0;

    while((c = getchar()) != EOF) {
        cc++;

        if(c == '\n') {
            lc++;
        }

        if(c == ' ' || c == '\n'  || c == '\t') {
            inword = 0;
        } else if(inword == 0) {
            inword = 1;
            wc++;
        }
        
    }

    printf("\nLine Count: %d", lc);
    printf("\nWord Count: %d", wc);
    printf("\nChar Count: %d", cc);

    return 0;
}