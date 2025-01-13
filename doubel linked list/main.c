#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
} Node;


int main () {
    Node *nodes = malloc(sizeof(Node));
    nodes->prev = NULL;
    nodes->data = 10;
    nodes->next = NULL;

    return 0;
}