#include <stdio.h>

void fun(int a, int b, int *summa, int *kopaytma) {
    *summa = a + b;
    *kopaytma = a * b;
}


int main (int argc, char *argv[]) {
    int a = 5, b = 12, summa = 0, kopaytma = 0;
    fun(a, b, &summa, &kopaytma);
    printf("%d\n%d\n", summa, kopaytma);
    return 0;
}