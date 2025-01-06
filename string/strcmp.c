#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Assalomu alaykum";
    char str2[100] = "Assalomu alaykun";
    if (strcmp(str, str2) == 0) {
        printf("Ikkala satr teng\n");
    } else {
        printf("Ikkala satr teng emas\n");
    }
    return 0;
}