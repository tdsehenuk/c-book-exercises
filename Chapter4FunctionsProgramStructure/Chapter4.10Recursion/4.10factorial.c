/*Write a recursive function int factorial(int n) that returns the factorial of n.
Test it with factorial(5).*/
//SLDC
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 10min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int factorial(int n) {
    if(n <= 1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }

}

int main() {
    int n = 0;
    printf("\nWelcome to my app where i will be showing recursion!");
    printf("\n 5 Factorial is equal to = %d", factorial(n));
    return 0;
}