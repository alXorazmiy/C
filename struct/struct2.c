#include <stdio.h>
#include <string.h>

typedef struct{
    int x;
    int y;
    int z;
} abc;


int main() {
    abc a = {.y = 20, .x = 10, .z = 15};
    printf("%d %d %d \n", a.x, a.y, a.z);
    return 0;
}