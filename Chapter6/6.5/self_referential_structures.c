// self referential structures 
// Author: Thomas Sehenuk
// Date: 5/22/25
//Time Start: 10:44pm 
//Time Stop: 

#include <stdio.h>
#include <stdlib.h> 

typedef struct Node {
    int data;
    struct Node *next;
} Node;


void insert_first(Node **head, int value) {
    Node *n1 = (Node *)malloc(sizeof(Node));
    if(n1 == NULL) {
        printf("failed memory allocation");
    }

    n1->data = value;
    n1->next = *head;
    *head = n1;
}

void print_list(Node *head) {
    Node *current = head; 
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
}

int main() {
    Node *head = NULL;
    insert_first(&head, 10);
    insert_first(&head, 20); 
    insert_first(&head, 30);


    print_list(head);


    return 0;
}
