#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
} Node;


void output(Node *node) {
    Node *current = node;
    while (current != NULL) {
        int prev_data = current->prev ? current->prev->data : -1;
        int next_data = current->next ? current->next->data : -1;
        
        printf("prev = %5d data = %5d next = %5d\n", prev_data, current->data, next_data);
        
        current = current->next;
    }
}


void insert_end(Node **node, int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    if (*node == NULL) {
        new_node->prev = NULL;
        *node = new_node;
        return;
    } 

    
    Node *current_node = *node;
    while (current_node->next !=NULL){
        current_node = current_node->next;
    }
    current_node->next = new_node;
    new_node->prev = current_node;
    
}


int main () {
    Node *node = NULL;
    
    insert_end(&node, 10);
    insert_end(&node, 5);
    insert_end(&node, -5);
    output(node);
    return 0;
}