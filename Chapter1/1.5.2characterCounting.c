#include <stdio.h>
#include <stdlib.h>

int main() {

    int count;
    /*while(getchar() != EOF) ++count;
    printf("%d", count);*/ 

    for (count = 0; getchar() != EOF; ++count){
        ;
    }
    printf("%d\n", count);

    return 0;
}