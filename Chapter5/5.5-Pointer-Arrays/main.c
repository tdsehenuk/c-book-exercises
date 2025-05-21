/*
Write a program that uses pointer arithmetic to traverse and manipulate an array of integers. The program should:
Declare and initialize an array of integers.
Use pointer arithmetic to print each element of the array.
Modify the elements of the array by using pointer arithmetic (e.g., multiply each element by 2).
Print the modified array to confirm the changes.*/

//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 5min
// Time with Extended Problem in Step 6: + 20min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int main() {

    int a[] = {1, 2, 3, 4, 5};
    int *pa = a;

    for(int i = 0; i < 5; i++) {
        printf("\nElement %d is equal to the value %d", i, *(pa+i));
    }
  
    for(int i = 0; i < 5; i++) {
        *(pa+i) *= 2;
        printf("\nElement %d is equal to the value %d", i, *(pa+i));
    }
  

    return 0;
}

// *(a+i) = a[i]
// (a+i) = &a[i]