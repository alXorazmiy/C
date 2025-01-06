#include <stdio.h>


int main() {
    char *ptr = "Hello World!";

    printf("%s\n", ptr);
    printf("%.5s\n", ptr);
    printf("%6.5s\n", ptr);

    return 0;
}