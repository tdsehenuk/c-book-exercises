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

void freeList(Node **head);
Node *searchList(Node *head, int data);
int countNodes(Node *head, int *ptrcounter);
void reverseList(Node **head);


int main() {
    printf("Hello user, This program is to show how linked lists work!\n");
    
    Node *head = NULL;
    int counter = 0;
    int *ptrcounter = &counter;
    addNodeAtFront(&head, 10);
    addNodeAtFront(&head, 20);
    addNodeAtFront(&head, 30);
    addNodeAtFront(&head, 40);
    addNodeAtFront(&head, 50);
    // addNodeAtEnd(&head, 100);
    // countNodes(head, ptrcounter);
    // printf("counter = %d\n", counter);

    // printNodeList(head);
    // printf("Searching for %d and its at %p", 20, searchList(head, 20) );
    // deleteNodeByValue(&head, 20);
    // printNodeList(head);
    // printf("Searching for %d and its at %p", 20, searchList(head, 20) );
    printNodeList(head);
    reverseList(&head);
    printNodeList(head);
    freeList(&head);




    if (head == NULL) {
        printf("List successfully freed!\n");
    } else {
        printf("Oops, something went wrong!\n");
    }

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

Node *searchList(Node *head, int data) {
    Node *current = head;
    while(current != NULL) {
        if(current->data == data) {
            return current;
        } else {
            current = current->next;
        }
    }
    return NULL;

}



int countNodes(Node *head, int *ptrcounter) {
    Node *current = head;
    if(current == NULL) {
        return 0;
    }
    
    while(current != NULL) {
        (*ptrcounter)++; 
        current = current->next; 
    }
    return *ptrcounter;
}

void freeList(Node **head) {
    Node *current = *head;
    Node *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

void reverseList(Node **head) {
    Node *current = *head;
    Node *prev = NULL;
    Node *next = NULL; 

    while (current != NULL)  {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
