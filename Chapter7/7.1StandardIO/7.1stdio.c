/*
Write a program that reads characters one by one using getchar() and echoes them to the screen using putchar(), but:
Replaces every space ' ' with an underscore '_'
Converts lowercase letters to uppercase
*/
// Author: Thomas Sehenuk
// Date: 5/24/25
// Checkout README.md for SDLC Documentation and more info
//Time Start 7:10
//Time Stop 7:22


#include <stdio.h>
#include <ctype.h>

int main() {

    int c = 0;
    while ((c = getchar()) != EOF) {
        
        if(c == ' ') {
            putchar('_');
        } else {
            putchar(toupper(c));
        }
    }
    return 0;
}