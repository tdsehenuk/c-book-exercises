/*
Create a program that initializes an array of pointers to strings, where each string is a single word. Then, print each word from the array using a loop.
*/

//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 10min
// Time with Extended Problem in Step 6: + 20min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

    int numStrings = 3;
    char *pa[numStrings];

    pa[0] = (char *)malloc(6 * sizeof(char)); //hello
    pa[1] = (char *)malloc(6 * sizeof(char)); //world
    pa[2] = (char *)malloc(4 * sizeof(char)); //!;)

    for(int i = 0; i <numStrings; i++) {
        if(*(pa+i) == NULL) 
            printf("\nMemory did not allocate!");
    }

    strcpy(pa[0], "hell");
    strcpy(pa[1], "world");
    strcpy(pa[2], "!;)");

    for(int i = 0; i <numStrings; i++) {
        printf("The string at index %d is %s", i,  *(pa+i));
    }

    for(int i = 0; i <numStrings; i++) {
        free(*(pa+i));
    }

    return 0;
}