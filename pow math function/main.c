#include <stdio.h>

int main () {
    int number, pow;
    double power = 1;
    scanf("%d %d", &number, &pow);
    if (pow > 0) {
        for (int i = 0; i < pow; i++) {
            power *= number;
        }
        printf("%.0lf\n", power);

    } else{
        pow  -= 2 * pow;
        for (int i = 0; i < pow; i++) {
            power *=  number;
        }
        power = (double) 1 / power;
        printf("%lf\n", power);
    }
    return 0;
}