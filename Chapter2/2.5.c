#include <stdlib.h>

#define MAX 25

int any(char s1[], char s2[]);


int main() {

    printf("%d\n", any("hello", "xyz"));  
    printf("%d\n", any("hello", "ol"));
}

int any(char s1[], char s2[]) {
    int i,j;
    
    for(i = 0; s1[i] != '\n'; i++) {
        for (j = 0; s2[j] != '\n'; j++) {
            if(s1[i] == s2[j]) {
                return i;
            }
        }
    }





    return -1;
}