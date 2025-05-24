//time start 2:06
//time stop 

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;

} Node;

void addNodeAtFront(Node **head, int data);
void printNodeList(Node *head);
void addNodeAtEnd(Node **head, int data);
void deleteNodeByValue(Node **head, int data);

void freeList();
void searchList();
int countNodes();
void reverseList();


int main() {
    printf("Hello user, This program is to show how linked lists work!\n");
    
    Node *head = NULL;
    addNodeAtFront(&head, 10);
    addNodeAtFront(&head, 30);
    addNodeAtFront(&head, 20);
    addNodeAtFront(&head, 50);
    addNodeAtFront(&head, 60);
    addNodeAtEnd(&head, 100);
    printNodeList(head);
    deleteNodeByValue(&head, 20);
    printNodeList(head);

    return 0; 
}

void addNodeAtFront(Node **head, int data) {
    Node *newNode = malloc(sizeof(Node));

    if(newNode == NULL) {
        printf("memory allocation failed");
        return;
    }

    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}


void printNodeList(Node *head) {
    Node *current = head;  

    while (current !=  NULL) {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


void addNodeAtEnd(Node **head, int data) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("memory allocation failed");
        return; 
    }

    newNode->data = data;
    newNode->next = NULL;

    if(*head == NULL) {
        *head = newNode;
        return;
    }

    Node *current = *head;  // derefence head --> aka what head points to aka first node
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = newNode; 

}

void deleteNodeByValue(Node **head, int data ) {
    Node *current = *head;
    Node *prev = NULL;

    if (current == NULL) {
        return;
    }

    if(current->data == data) {
        *head = current->next;
        free(current);
        return;
    }


    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if(current == NULL) {
        return; 
    }

    prev->next = current->next;
    free(current);
}
