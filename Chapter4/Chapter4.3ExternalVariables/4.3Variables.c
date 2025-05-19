/*Create a global variable int counter = 0;
Write a function void increment() that adds 1 to counter.
Call it multiple times from main() and print the final result*/

// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 15min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int counter = 0; //global

void increment() {
    counter++;
}


int main () {
    printf("\nWelcome to my program!");
    printf("\nI will be showcasing how global (external) variables work!");
    printf("\nHere is my variable counter: %d", counter);

    for(int i = 0; i < 3; i++) {
        increment();
        printf("\nCounter after calling function increment: %d ", counter);
    }
    return 0;
}