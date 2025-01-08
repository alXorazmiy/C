



#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


int main(int argc, char *argv[]) {
    int length = 10;
    char *p = (char *) calloc(length,sizeof(char));
    for (int i = 0; i < length; i++) {
        printf("%d - address : %p\n",i + 1, p + i);
    }
    printf("############################\n");
    for (int i = 0; i < length; i++) {
        printf("%c ", p[i]);
    }
    free(p);

    return 0;
}