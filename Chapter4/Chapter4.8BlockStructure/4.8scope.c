/*
Use {} to declare a variable int x = 10 inside a block in main().
Try printing x outside the block — what happens?*/

// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 15min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int main() {
    {
        int x = 10;  
        printf("Inside block: x = %d\n", x);  
    }

    // printf("Outside block: x = %d\n", x);  //error
    return 0;
}