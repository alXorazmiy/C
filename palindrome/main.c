#include <stdio.h>
#include <math.h>

int main () {
    printf("Palindromga tekshirilmoqchi bo'gan sonni kiriting: ");
    int number;
    scanf("%d", &number);
    int count = 0;
    int number2 = number;
    while (number2 > 0) {
        number2 = number2 / 10;
        count++;  // bu sikl kiritilgan sonning nechta xonali ekani aniqlab beradi.
    }
    int result = 0;
    number2 = number;
    for (int i = count - 1; i >= 0; i--) {
        result += (number2 %10) * pow(10, i);
        number2 = number2 / 10;  // bu sikl kiritilgan sonnning teskasini yaratadi.
    }
    if (result == number) { // bu joyda kiritilgan son va teskarisi solishtiriladi.
        printf("Ha\n");
    } else {
        printf("Yo'q\n");
    }
    return 0;
}