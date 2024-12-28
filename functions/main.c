#include <stdio.h>

int function_area(int height, int widht) {
    return height * widht;
}

int main() {
    int area, height, widht;
    scanf("%d %d", &height, &widht);
    area = function_area(height, widht);
    printf("%d\n", area);
    return 0;
}