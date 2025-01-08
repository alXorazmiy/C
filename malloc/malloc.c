



#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main(int argc, char *argv[]) {
    int *p = (int *) malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++) {
        printf("%d - address : %p\n",i + 1, p + i);
    }
    printf("############################\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", p[i]);
    }
    return 0;
}