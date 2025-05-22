// accessing structure members 
// Author: Thomas Sehenuk
// Date: 5/21/25
//Time Start: 11:41
//Time Done: 11:

/*
Write a program that initializes a Student structure with values and prints 
the details of the student. Use a function to print the details.

Define a structure Student that contains:
A string for the student's name.
An integer for the student's age.
A float for the student's GPA.
*/

#include <stdio.h>

struct Student {
    char name[25];
    int age;
    float gpa;
};

void printStudentDetails(struct Student student[], int size);

int main() {
    
    struct Student class[] = { {"Thomas", 24, 3.50}, {"Dalton", 42, 3.01}, {"Sehenuk", 100, 4.00} };
    int size = sizeof(class)/sizeof(class[0]);

    printStudentDetails(class, size);

    return 0;
}

void printStudentDetails(struct Student student[], int size) {
    for(int i = 0; i < size; i++) {
        printf("\nStudent: %s age: %d GPA: %.2f" , student[i].name, student[i].age, student[i].gpa);
    }
}
