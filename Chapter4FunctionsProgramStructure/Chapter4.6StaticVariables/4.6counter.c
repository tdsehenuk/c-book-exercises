/*Write a function void counter() that has a static int count variable and prints it every time the function is called.
Call it 5 times in a loop from main().
*/
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 13min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h>

void counter() {
    int static count = 0;
    count++;
    printf("\ncount is equal to: %d ", count);
} 

int main() {
    for(int i = 0; i < 5; i++) {
        counter();
    }

    return 0;
}