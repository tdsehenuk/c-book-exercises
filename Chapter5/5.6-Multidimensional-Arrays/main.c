/*
Problem Statement:
Write a program that uses pointer arithmetic to manipulate a 2D array (matrix). The program should:
Declare and initialize a 2D array (matrix).
Use pointer arithmetic to print the elements of the matrix.
Modify the elements of the matrix by using pointer arithmetic (e.g., multiply each element by 2).
Print the modified matrix to confirm the changes.

//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 5min
// Time with Extended Problem in Step 6: + 20min
// Checkout README.md for SDLC Documentation and more info
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
    
    int a[3][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
    };

    int *pa = (int *)a;

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j<3; j++) {
           
            printf("\n [%d]", *(pa+i * 3+j) );
        }
    }
        

    return 0;
}