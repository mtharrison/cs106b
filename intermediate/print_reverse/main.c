#include <stdio.h>
#include <stdlib.h>

#include "types.h"

// Prints a list out

void printList(list *list) {

    printf("%15s %10s\n", "Address", "Value");

    node *curr = list->head;

    while(curr) {
        printf("%15p %10d\n", (char *) curr, curr->val);        
        curr = curr->next;
    }
}

// Cleans up memory of list

void destroyList(list *list) {

    node *curr = list->head, * next;

    // Free all nodes

    while(curr) {
        next = curr->next;
        free(curr);
        curr = next;
    }

    // Free list

    free(list);

}

// Reverse a linked list

list *reverseList(list *fwdList) {

    list *revList = malloc(sizeof(list));

    node *temp;
    node *previous = NULL;
    node *head = fwdList->head;

    while(head != NULL) {
        temp = head->next;
        head->next = previous;
        previous = head;
        head = temp;
    }

    revList->head = previous;

    return revList;
}

int main(int argc, char const *argv[]) {

    node *head = NULL, * curr = NULL;

    // Make a new list

    list *linkedList = malloc(sizeof(list));

    // Populate the list

    for (int i = 10; i > 0; --i) 
    {
        // Get memory for node
        node *newNode = malloc(sizeof(node));
        newNode->val = i;
        newNode->next = head;

        head = newNode;
    }

    // Add the head to the list struct

    linkedList->head = head;

    printList(linkedList);

    list *revList = reverseList(linkedList);

    printList(revList);

    destroyList(linkedList);

    free(revList);

    return 0;
}