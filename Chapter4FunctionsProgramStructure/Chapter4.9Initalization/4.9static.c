/*Declare a static int num = 5; and an automatic int temp = 5;
Print both before and after a loop that runs 3 times and modifies them.
*/
// Author: Thomas Sehenuk
// Date: 5/18/25
// Estimated Time (testing/writing/coding/github): 15min
// Checkout README.md for SDLC Documentation and more info

#include <stdio.h> 

void test() {
    static int num = 5;
    int temp = 5;
    printf("\nThe value of num = %d", num);
    printf("\nThe value of temp = %d", temp);
    num++;
    temp++;
}

int main() {

    printf("\nWelcome to my program where i will be showing initialization!");

    for (int i = 0; i<3; i++) {
        test();
    }

    return 0;
}