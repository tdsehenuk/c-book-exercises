#include <stdio.h>
#include <stdlib.h>

char lower (char c) {
    return (c>= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}
    
int main() {
    char word[] = {"thisWoRD"};
    
    int i = 0;
    while(word[i]) {
        word[i] = lower(word[i]);
        i++;
    }

    printf("Lower case word %s", word);
    return 0;
}