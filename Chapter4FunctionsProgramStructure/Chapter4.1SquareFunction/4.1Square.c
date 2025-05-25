// Purpose: Program to calculate the square of a number
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 20min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int square(int n);

int main() {
    int test = 0;
    
    printf("\nWelcome to the square-function program!");
    printf("\nPlease enter a number to be squared: "); 
    scanf("%i", &test);
    printf("%d squared is equal to: %d", test, square(test));

    return 0;
}

int square(int n) {
    return n * n;
}

/* TESTING
Input  Output 
3         9                 
-5       25             
0         0         
*/