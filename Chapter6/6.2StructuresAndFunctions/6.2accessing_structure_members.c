// accessing structure members 
// Author: Thomas Sehenuk
// Date: 5/21/25
//Time Start: 11:29
//Time Done: 11:38

#include <stdio.h>


struct Book {
    char title[50];
    char author[50];
    int publicationYear;
    float price;
};


void printBookDetails(struct Book book);



int main() {

    struct Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99};
    struct Book book2 = {"1984", "George Orwell", 1949, 8.99};

    printBookDetails(book1);
    printBookDetails(book2);

    return 0;
}

void printBookDetails(struct Book book) {
    printf("\n%s %s %i %.2f", book.title, book.author, book.publicationYear, book.price);
}
