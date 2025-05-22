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


    if (car == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    strcpy(car->model, "Audi");
    car->year = 2015; 
    car-> price = 10000;

    printf("Model: %s\n", car->model);
    printf("Year: %d\n", car->year);
    printf("Price: $%.2f\n", car->price);

    free(car);
    return 0;
}

