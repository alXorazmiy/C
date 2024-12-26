#include <stdio.h>


int main() {
    int a = 5, b = 3;
    int result;

    result  = (a > b) || (a = b);
    printf("%d\n", result);
    result  = (a < b) && (a = b);
    printf("%d\n", result);
    return 0;
}