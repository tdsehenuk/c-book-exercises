/*Create a global variable int value = 10;
Inside a function, declare a local variable int value = 20; and print it.
Also print the global value.
*/
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 20min
// Checkout README.md for SDLC Documentation and more info



#include <stdio.h> 

int value = 10;

void printValues() {
    int value = 20; 
    printf("\nValue inside of the function printValues  is: %d", value);
}

int main() {
    printf("\nHere is a program that shows scope between global variables and local variables.");
    printf("\nI have 2 variables named 'value' and will print both of them.");
    printf("\nThe first vairable is a global one and its value is: %d", value);
    printValues();


    return 0;
}