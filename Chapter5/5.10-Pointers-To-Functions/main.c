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

    int a, b, choice;
    int (*fp)(int, int); 

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("Enter choice (1 or 2): ");
   
    while(1) {
        scanf("%d", &choice);
        if (choice == 1) {
            fp = add;
            break;
        } else if (choice == 2) {
            fp = subtract;
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    int result = fp(a,b);
    printf("\nThe result is: %d", result);
    return 0;
}



int add(int a, int b) {
    return a+b;
}

int subtract(int a, int b) {
    return a-b;
}