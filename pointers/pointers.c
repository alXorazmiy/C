#include <stdio.h>


int main() {
    int a = 10;
    printf("a = %d\n", a);
    int *p = &a;
    *p = 5;
    printf("a = %d\n", a);
    return 0;
}