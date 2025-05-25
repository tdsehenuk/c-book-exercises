/*
Write a program that:
Opens a file for reading (e.g., "input.txt")
Opens another file for writing (e.g., "output.txt")
Copies the contents of the first to the second, character by character
Closes both files

*/

//time start 8:06
//time stop 8:13

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *infile = fopen("input.txt", "r");
    FILE *outfile = fopen("output.txt", "w"); 

    int c = 0;; 
    while ( (c = getc(infile)) != EOF) {
        putc(c, outfile);
    }

    fclose(infile);
    fclose(outfile);

    printf("File copied successfully.\n");

    return 0;
}