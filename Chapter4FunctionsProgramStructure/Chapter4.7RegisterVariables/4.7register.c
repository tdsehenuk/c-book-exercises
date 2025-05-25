/*
Write a function that uses register int i in a loop and explain why the output is no different from a regular int.
*/
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 15min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>
#include <stdlib.h> 

void fun() {
    register int i = 0; 
    i++;
    printf("\nhere is register i value %d ", i);
}

int main() {
    int j = 0;
    for(int i = 0; i < 5; i++) {
        printf("\nHere is j's value %d", j); 
        j++;
        fun();
    } 

    return 0;
}