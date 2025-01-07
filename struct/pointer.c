#include <stdio.h>


typedef struct {
    int x;
    int y;
} abc;


int main() {
    abc a = {.x = 0, .y = 1};
    abc *ptr = &a;

    printf("%d %d\n", ptr -> x, ptr -> y);
    return 0;
}