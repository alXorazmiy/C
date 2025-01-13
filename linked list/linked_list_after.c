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


void insert_after(Node *node, int value, int index){
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    int i = 0;
    while (node != NULL){
        if (index == i) {
            new_node->x = value;
            new_node->next = node->next;
            node->next = new_node;
            break;
        }
        node = node->next;
        i++;
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
    int index = 2;
    insert_end(&node, 5);
    insert_end(&node, -1);
    insert_end(&node, 3);
    insert_end(&node, 7);
    insert_end(&node, -4);
    insert_after(node, 0, index);
    output(&node);
    deollacate(&node);
    
    return 0;
}