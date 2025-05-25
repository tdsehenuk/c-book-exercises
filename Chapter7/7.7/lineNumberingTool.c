/*
Write a program that:
Opens a file named "input.txt" for reading.
Reads it line by line using fgets().
Prints each line to stdout, prefixing it with a line number, like this:*/

#include <stdio.h> 

int main() {

    int c = 0;
    char linebuffer[256];
    int line = 1;


    FILE *input = fopen("input.txt", "r");
    if(input == NULL) {
        perror("couldn't open file!\n");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if(output == NULL) {
        perror("couldn't open file!\n");
        fclose(input);
        return 1;
    }

    while(fgets(linebuffer, sizeof(linebuffer), input) != NULL) {
        printf("%d: %s", line, linebuffer);
        fprintf(output, ("%d: %s", line, linebuffer));
        line++;
    }

    fclose(input);
    fclose(output);

    return 0;
}