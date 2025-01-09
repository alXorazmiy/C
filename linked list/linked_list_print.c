#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node *next;
} Node;

int main() {
    Node root;
    root.x = 15;
    root.next = malloc(sizeof(Node));
    root.next->x = -1;
    root.next->next = NULL;
    
    Node *list = &root;
    while (list != NULL){
        printf("%d\n", list->x);
        list = list->next;
    }
    
    free(root.next);
    return 0;
}