#include <stdio.h>

int main () {

    int c;

    while ((c = getchar()) != EOF) {
        if(c == '\t') {
            printf("\\t");
        } else if(c == 8 || c == 127) { // will never see backsspace (DEL) bc of line buffering
            printf("\\b");
        } else if(c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
        
    }


    return 0;
}