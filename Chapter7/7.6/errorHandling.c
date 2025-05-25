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
//time stop 8:39

#include <stdio.h>

int main () {
    FILE *input = fopen("input.txt", "r");   
    FILE *output = fopen("output.txt", "w");

    if(input == NULL) {
        perror("Error opening input");
        return 1;
    }

    if (output == NULL) {
        perror("Error opening output");
        fclose(input);
        return 1;
    }


    int c = 0;
    while ((c = getc(input)) != EOF) {
        if(putc(c,output) == EOF) {
            perror("Error writing to output");
            fclose(input);
            fclose(output);
            putc(c, output);
       }
    }
    
    if(feof(input)) {
        printf("Copy completed successfully!\n");
    } else if(ferror(input)) {
        perror("error reading input.txt");
    }

    fclose(input);
    fclose(output);


    return 0;
}