/*
Write a program that:
Declares and initializes two functions, one that performs an addition (add) and another that performs a subtraction (subtract).
Declares a pointer to a function and uses this pointer to call both functions.
Demonstrates the use of function pointers by switching the pointer between the two functions and calling them.
You are required to:
Use a function pointer to call the add and subtract functions dynamically.
Show how the function pointer can be reassigned to point to different functions during runtime.
*/

//SLDC
// Author: Thomas Sehenuk
// Date: 5/21/25
// Estimated Time (testing/writing/coding/github): 25min
// Time with Extended Problem in Step 6: + 0min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

int main() {

    int (*fp)(int, int) = add;
    int result = fp(10, 20);
    printf("\nResult: %d", result);
}

int add(int a, int b) {
    return a+b;
}
    

int subtract(int a, int b) {
    return a-b;
}