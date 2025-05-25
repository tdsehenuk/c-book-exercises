#include <stdlib.h>
#include <stdio.h>

int main() {

    int c;
    
    while((c = getchar()) != EOF) {
        printf("c value is: %d \n", c);
    }
    printf("%d - at EOF\n", c);

    printf("The value of EOF is: %d\n", EOF);

    return 0;

}