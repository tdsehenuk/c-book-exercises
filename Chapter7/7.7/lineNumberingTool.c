/*
Write a program that:
Opens a file named "input.txt" for reading.
Reads it line by line using fgets().
Prints each line to stdout, prefixing it with a line number, like this:*/

#include <stdio.h> 

int main() {
    int c = 0;
    FILE *input = ("input.txt", "r");
    if(input == NULL) {
        perror("couldn't open file!\n");
        return 1;
    }
    FILE *output = ("output.txt", "w");
    if(output == NULL) {
        perror("couldn't open file!\n");
        fclose(input);
        return 1;
    }

    return 0;
}