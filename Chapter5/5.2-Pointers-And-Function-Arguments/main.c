/*
Write a function void swap(int *a, int *b) that swaps the values of two integers using pointers.
In main(), declare two integers, initialize them (e.g., int x = 10, y = 20;), and call swap(&x, &y).
Print the values before and after the function call to verify that the values have been swapped using pointers.
*/

//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 20min
// Time with Extended Problem in Step 6: + 10min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>
void swap(int *x, int *y); 

int main () {
    int x = 10;
    int y = 20;
    int *px = &x;
    int *py = &py;
    
    printf("\nThe value of x and y before swapping: %d and %d", x, y);
    

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *y = *x;
    *x = temp;
}
