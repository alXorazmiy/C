#include <stdio.h>


int input (char str[], int n) {
    int ch, i = 0;
    while((ch = getchar()) != '\n') {
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}



int main() {
    char str[100];
    int n = input (str, 5);
    printf("%d %s\n", n, str);
    return 0;
}