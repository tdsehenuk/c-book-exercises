// accessing structure members 
// Author: Thomas Sehenuk
// Date: 5/22/25
//Time Start: 12:08am
//Time Done: 12:

#include <stdio.h>

struct Car {
    char model[30];
    int year;
    float price;
};

int main() {

    struct Car *car;
    car = (struct Car *)malloc(sizeof(struct Car));


    return 0;
}

