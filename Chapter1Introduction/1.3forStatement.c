#include <stdio.h>
#include <stdlib.h>

int main() {
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }


    return 0;
}

//modified for 1-5 print the table in reverse order 300 degrees --> 0 degrees