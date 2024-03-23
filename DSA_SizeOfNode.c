#include <stdio.h>
// Define a linked list node structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create an instance of the Node structure
    struct Node myNode;

    // Calculate and print the size of the Node structure
    size_t nodeSize = sizeof(struct Node);
    printf("Size of Node structure: %zu bytes\n", nodeSize);
    return 0;
}
