/*Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.  */
/*

for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
       s[i] = c; 

*/

#include <stdio.h> 
#define MAXSIZE 100

int main() {

    int i = 0;
    int limit = MAXSIZE - 1;
    int c = 0;
    char line[MAXSIZE] = {0};

    while(i < limit - 1) {
        c = getchar();
        if(c == EOF) 
            break;
        else if ( c== '\n') {
            break;
        } else {
            line[i++] = c;
        }
        line[i] = '\0';
    }

    printf("%s", line);
    


    return 0;
}