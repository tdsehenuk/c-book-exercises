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

int main () {

    char *pa[] = {"hello", "how", "are", "you", "doing?"};

    for(int i = 0; i < 5; i++) {
        printf("\nElement [%d]'s word: %s", i, pa[i]);
    }

}