/*
Write a program that reads input (using getchar()) and counts how many characters of each type it sees:
Digits (0-9)
Whitespace characters (space, tab, newline)
Everything else (punctuation, letters, symbols, etc.)
Print the counts when EOF is reached
*/


//
//time start 7:35
//time stop 7:44

#include <stdio.h>

int main() {

    int c = 0;
    int whitespaces = 0;
    int digits = 0;
    int otherchars = 0;

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            digits++;
        } else if(c == ' ' || c == '\t' || c == '\n') {
            whitespaces++;
        } else {
            otherchars++;
        }
    }

    printf("\nWhitespaces: %d", whitespaces);
    printf("\notherchars: %d", otherchars);
    printf("\ndigits: %d", digits);

    return 0;
}