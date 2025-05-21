/*
Write a program that demonstrates the use of a pointer to a pointer.
Requirements:
Declare an integer variable.
Declare a pointer to that integer.
Declare a pointer to that pointer.
Use all three levels of access to print the value.
Modify the value using the pointer to pointer and confirm the change using all three access levels.
*/
//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 15min
// Time with Extended Problem in Step 6: + 0min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main () {

    int num = 10; 
    int *p = &num;
    int **pp = &p;
    printf("\nNum is equal to  %d", num);
    printf("\n*P is equal to  %d", *p);
    printf("\n**PP is equal to %d", **pp);

    
    return 0;
}