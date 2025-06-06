/*
Write a program that accepts command-line arguments and prints each argument on a new line.

Requirements:
Use int main(int argc, char *argv[]) to access command-line arguments.
Print the total number of arguments.
Loop through argv[] and print each argument, one per line.
Do not use array indexing (e.g., argv[i]) — instead, use pointer arithmetic.

*/

//SLDC
// Author: Thomas Sehenuk
// Date: 5/21/25
// Estimated Time (testing/writing/coding/github): 25min
// Time with Extended Problem in Step 6: + 0min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int main (int argc, char *argv[]) {
    
    printf("Command line arguments: %d", argc);
    for(int i = 1; i< argc; i++) {
        printf("\nArugment %d is equal to %c", i, *(argv + i ));
    }

    return 0;
}