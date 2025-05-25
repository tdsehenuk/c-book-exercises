#include <stdio.h>

int main() {

    int blankCounter =0;;
    int c;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(blankCounter == 0) {
                putchar(c);
                blankCounter = 1;
            } 
        } else if (c != ' ') {
            putchar(c);
            blankCounter = 0;
        } 
    }

    return 0;
   
}


 /* if(c != ' ' && c != '\n') {
            putchar(c);
        }*/