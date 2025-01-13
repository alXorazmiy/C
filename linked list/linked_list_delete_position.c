#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node *next;
} Node;


void output(Node **node) {
    Node *nodes = *node;
    while (nodes != NULL){
        printf("%d\n", nodes->x);
        nodes = nodes->next;
    }
}


void insert_end(Node **node, int value) {
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;

    if (*node == NULL) {
        *node = new_node;
        return;
    }

    Node *current_node = *node;
    while (current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = new_node;
}


void delete_position(Node **node, int index){
    Node *current_node = *node;
    Node *previous_node = *node;
    if (*node == NULL) {
        exit(1);
    } else if (index == 1) {
        *node = current_node->next; 
        free(current_node);
        current_node = NULL;
    } else {
        while (index != 1){
            previous_node = current_node;
            current_node = current_node->next;
            index--;
        }
        previous_node->next = current_node->next;
        free(current_node);
        current_node = NULL;
        
    }
    
}

void deollacate(Node **node) {
    Node *current_node = *node;
    while (current_node != NULL){
        Node *item = current_node;
        current_node = current_node->next;
        free(item);
    }
    *node = NULL;
    
}

int main() {
    Node *node = NULL;
    int index = 3;
    insert_end(&node, 5);
    insert_end(&node, -1);
    insert_end(&node, 3);
    insert_end(&node, 7);
    insert_end(&node, -4);
    delete_position(&node, index);
    output(&node);
    deollacate(&node);
    
    return 0;
}