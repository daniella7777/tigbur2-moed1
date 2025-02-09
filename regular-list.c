#include "regular-list.h"

// Initialize a regular linked list with dynamic memory allocation
List_t* initList() {
}


// Add a node to the end of a regular linked list
void addNode(List_t* list, void* data) {
}

// Free memory of the list
void freeList(List_t* list) {
    
    Node_t* current = list->head;
    while (current) {
        Node_t* temp = current;
        current = current->next;
        free(temp);
    }
    free(list);
}