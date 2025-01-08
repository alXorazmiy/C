#include <stdio.h>


int main(int argc, char *argv[]) {
    int array[] = {7, 8 ,10, 11, 15};
    int n = 5;
    printf("Address array: %p\n", &array);
    for (int i = 0; i < n; i++) {
        printf("%d - address: %p\n", i+1, &array[i]);
    } 
    printf("######################################\n");
    for (int *p = &array[0]; p <= &array[n - 1]; p++) {
        printf("%d ", *p);
    }
    return 0;
}