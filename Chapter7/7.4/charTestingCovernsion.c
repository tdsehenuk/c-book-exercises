//time start 7:53
// time stop 8:05

/*
Write a program that:
Counts the number of:
lowercase letters
uppercase letters
non-alphabetic characters

*/

#include <stdio.h>
#include <ctype.h>

int main() {

    int lowerc = 0;
    int upperc = 0;
    int notalpha = 0;
    int c = 0;

    while ( (c = getchar()) != EOF) {
        if(islower(c)) {
            lowerc++;
        } else if(isupper(c))  {
            upperc++;
        } else {
            notalpha++;
        }
    }

    printf("\nLower Chars: %d", lowerc);
    printf("\nUpper Chars: %d", upperc);
    printf("\nNon Alphabetic Chars: %d", notalpha);


    return 0;
}