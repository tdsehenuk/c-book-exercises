// Purpose: Program to calculate the square of a number
// Author: Thomas Sehenuk
// Date: 5/18
// Estimated Time (testing/writing/coding) :
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int square(int n);

int main() {
    int test = 5;
    
    printf("\nWelcome to the square-function program!");
    printf("\n%d squared is equal to: %d", test, square(test));

    return 0;
}

int square(int n) {
    return n * n;
}

