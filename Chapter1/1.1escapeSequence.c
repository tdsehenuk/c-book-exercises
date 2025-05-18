#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n:newline"); //newline
    printf("\t:tab"); // tabs 5 spaces over
    printf("\b:backspace"); // deletes the character before

    printf("\a\b\c\d\e\f\g\h\i"); //gives warning for unknown sequence
    return 0; 
}