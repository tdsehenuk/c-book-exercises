#include <stdio.h>



int power(int m, int y);

int main() {
    int i;
    for(i=0; i<10; ++i) {
        printf("%d %d %d\n", i, power(2,i), power((-3), i));
    }
    return 0;

}

int power(int base, int pow) {
    int product = 1;
    for (int i = 0; i < pow; ++i)
        product = product * base;

    return product;
}