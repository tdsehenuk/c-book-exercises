#include <stdio.h>

#define IN 1
#define OUT 0

int main () {
     int c, newLine, newWord, newChar, currentState;

    currentState = OUT;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            newLine++;
        } 
        if (c == ' ' || c == '\n'|| c == '\t') {
            currentState = OUT;
        } else if (currentState == OUT) {
            newWord++;
            currentState = IN;
        }
    }

    printf("\nTotal words entered: %d", newWord);
    printf("\nTotal lines entered: %d", newLine);
    printf("\nTotal characters entered: %d", newChar);
    
    return 0;
    }

/*
How would you test the word count program? What kinds of input are most 
likely to uncover bugs if there are any?  
*/