// accessing structure members 
// Author: Thomas Sehenuk
// Date: 5/21/25
//Time Start: 11:29
//Time Done: 11:

#include <stdio.h>

void printBookDetails(struct Book book);

struct Book {
    char title[50];
    char author[50];
    int publicationYear;
    float price;
};



int main() {

    struct Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99};
    struct Book book2 = {"1984", "George Orwell", 1949, 8.99};
    return 0;
}

void printBookDetails(struct Book book) {
    printf("\n%s %s %i %.2f");
}
