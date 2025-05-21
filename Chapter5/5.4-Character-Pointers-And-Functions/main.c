/*
Write a program that declares an integer array of 5 elements.
Use both array indexing and pointer arithmetic to:
- Print each element's value
- Print each element's memory address

Then, write two separate functions:
1. One that prints using array indexing: void print_with_index(int arr[], int size)
2. One that prints using pointer arithmetic: void print_with_pointer(int *ptr, int size)
*/


//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 10min
// Time with Extended Problem in Step 6: + 20min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() {

    int a[] = {10, 20, 30, 40, 50};
    int *pa = a;

    for (int i = 0; i<5; i++) {
        printf("\nThe address at index %d is %p and is equal to %d", i, pa[i], pa[i]);
    }

    return 0;
}