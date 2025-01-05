#include <stdio.h>
#include <stdlib.h>

void tail_recursion(int n) {
    if (n == 0) {
        printf("\n");
        exit(0);
    } else {
        printf("%d ", n);
    }
    tail_recursion( n - 1);
}


int main() {
    int n = 5;
    tail_recursion(n);
    return 0;
}