#include <stdio.h>

int recursion(int *a, int n){
    if (n <= 0) {
        return 0;
    }
    else if (*a % 2 == 0) {
        return *a + recursion(a + 1, n - 1);
    } else {
        return *a - recursion(a + 1, n - 1);
    }
}


int main() {
    int a[] = {12, 7, 13, 4, 11, 6};
    int size = sizeof(a) / sizeof(a[0]);
    printf("%d\n", recursion(a, size));
    return 0;
}