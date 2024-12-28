#include <stdio.h>
#include <math.h>


int main() {
    int number;
    scanf("%d", &number);

    int number2 = number;
    int result = 0;
    int count = 0;
    while (number2 > 0) {
        number2 = number2 / 10;
        count++;
    }
    number2 = number;
    for (int i = 0; i < count; i++) {
        result += pow((number2 % 10), count);
        number2 = number2 / 10;
    }

    if (number = result) {
        printf("Ha\n");
    } else {
        printf("Yo'q\n");
    }
    return 0;
}