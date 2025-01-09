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
    printf("%d\n%d\n", root.x, root.next->x);
    free(root.next);
    return 0;
}