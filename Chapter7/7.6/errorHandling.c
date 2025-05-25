/*
Write a program that:

Opens a file called "input.txt" for reading.
Opens a file called "output.txt" for writing.
Copies the contents from input to output character by character.
After copying, checks if:
End-of-file was reached naturally.
Any I/O error occurred.
Reports the status clearly using feof(), ferror(), and perror().
*/

//time start: 8:24
//time stop 8:

#include <stdio.h>

int main () {
    FILE *input = fopen("input.txt", "r");   
    FILE *output = fopen("output.txt", "w");

    int c = 0;
    while ((c = getc(input)) != EOF) {
        putc(c, output);
    }

    return 0;
}