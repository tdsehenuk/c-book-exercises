/*
Write a function void set_to_zero(int *p) that takes a pointer 
to an int and sets the value at the pointed location to zero.
In main(), declare an integer x and assign it a value. 
Print the value of x before and after calling set_to_zero() with the address of x. 
Verify that the value of x has been modified by the function.
*/

//SLDC
// Author: Thomas Sehenuk
// Date: 5/20/25
// Estimated Time (testing/writing/coding/github): 20min
// Time with Extended Problem in Step 6: + 10min
// Checkout README.md for SDLC Documentation and more info

//void set_to_zero(int *p);  <-- Updated From #6 
void set_to_zero(int *arr, int size);
void negate(int *p);
#include <stdio.h>

int main() {

    int x = 42;
    int *px = &x;

    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data)/sizeof(data[0]);

    for(int i = 0; i < size; i++) {
        printf("\nBefore calling the function set_to_zero data[%d]: %d", i, data[i]);
    }

    set_to_zero(data, size);

    for(int i = 0; i < size; i++) {
        printf("\nAfter calling the function set_to_zero data[%d]: %d",i, data[i]);
    }

    printf("\nBefore calling the function negate x: %d", *px);
    negate(px);
    printf("\nAfter calling the function negate x: %d", *px);

    return 0;
}

/*void set_to_zero(int *p) {
    *p = 0;
}*/ 

// function that will initilize each element in an array to 0 by using pointers
void set_to_zero(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr+i) = 0; 
    }
}

void negate(int *p) {
    *p = -(*p);
}
