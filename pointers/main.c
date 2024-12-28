#include <stdio.h>

void function_area(int *area, int height, int widht) {
    *area =  height * widht;
}

int main() {
    int area, height, widht;
    scanf("%d %d", &height, &widht);
    function_area(&area, height, widht);
    printf("%d\n", area);
    return 0;
}