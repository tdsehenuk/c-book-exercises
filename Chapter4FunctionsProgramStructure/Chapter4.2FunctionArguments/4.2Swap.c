/* Purpose: Write a function void swap(int a, int b) that tries to swap two numbers and print their values in the function.
Observe whether the values actually change.*/
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 20min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

void swap(int a, int b);

int main () {
    int old1 = 10;
    int old2 = 20;
    printf("\nWelcome to an program that swaps two values and see if their values change when passed to a function!");
    swap(old1, old2);
    printf("\nBack in main: old1 = %d, old2 = %d\n", old1, old2);
    return 0; 
}

void swap(int a, int b) {
    printf("\nHere are two values %d and %d. Let's see if they swap values when using the 'swap' function!", a, b);
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    printf("After the swap,a = %d and b = %d", a, b);
}