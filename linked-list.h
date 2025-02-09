#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    void* data;
    struct Node* next;
} Node_t;

typedef struct LinkedList {
    Node_t* head;
    Node_t* tail;
} List_t;

