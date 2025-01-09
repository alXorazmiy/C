#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node *next;
} Node;


void output(Node *root) {
    while (root != NULL){
        printf("%d\n", root->x);
        root = root->next;
    }
}


void insert_end(Node *root, int value) {
    while (root->next != NULL){
        root = root->next;
    }
    root->next = malloc(sizeof(Node));
    root->next->x = value;
    root->next->next = NULL;
}

int main() {
    Node root;
    root.x = 15;
    root.next = NULL;
    insert_end(&root, 5);
    insert_end(&root, -1);
    insert_end(&root, 3);
    output(&root);
    
    return 0;
}