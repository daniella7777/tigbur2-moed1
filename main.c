#include "regular-list.h"
#include "circular-list.h"

int main() {

    // Initialize both lists 
    List_t* linkedList = initList();
    List_t* circularList = initCircularList();

    // Insert values
    int values[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        addNode(linkedList, &values[i]);
        addCircularNode(circularList, &values[i]);
    }

    // Print both lists


    // Free memory
    freeList(linkedList);
    freeCircularList(circularList);

    return 0;
}