#include <stdio.h>

int main () {
    int count;
    scanf("%d", &count);
    int a = 0, b = 1;
    int result = 0;
    if (count == 0) {
        printf("0\n"); 
        return 0;
    }
    if (count == 1) {
        printf("1\n"); 
        return 0;
    }
    while(count >= 2) {
        result = a + b;
        a = b;
        b = result;
        count--;
    }

    printf("result = %d\n", result);

}