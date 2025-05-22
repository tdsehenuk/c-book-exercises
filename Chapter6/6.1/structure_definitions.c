// structure definitions 
// Author: Thomas Sehenuk
// Date: 5/21/25
//Time Start: 11:14
//Time Done:

/*
This section introduces struct, a user-defined data type in C that allows grouping different data types together. A structure is defined using the struct keyword, followed by the structure's name and its members enclosed in braces.

Problem:
Define a structure named Book that contains:
A string for the title.
A string for the author.
An integer for the publication year.
A float for the price.
Write a program that initializes a Book variable and prints its details.
*/

struct Book {
    char title[50];
    char author[50];
    int publicationYear;
    float price;
};


#include <stdio.h>
#include <string.h>
int main() {

    struct Book book1; 
    strcpy(book1.title, "Hello World!");
    strcpy(book1.author, "Thomas Sehenuk");
    book1.publicationYear = 2025;
    book1.price = 0.00; // free

    printf("\nThe book named %s writted by %s was released in %d and has a price of %.2f", book1.title, book1.author, book1.publicationYear, book1.price);
    return 0;
}
