#include "circular-list.h"

// Initialize a circular linked list with dynamic memory allocation
List_t* initCircularList() {

}

// Add a node to a circular linked list
void addCircularNode(List_t* list, void* data) {

}

// Free memory of the circular linked list
void freeCircularList(List_t* list) {

    Node_t* current = list->head;
    do {
        Node_t* temp = current;
        current = current->next;
        free(temp);
    } while (current != list->head);

    free(list);
}
