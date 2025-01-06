#include <stdio.h>
#include <string.h>


int main() {
    char str[50], str2[50];
    strcpy(str, "Assalomu");
    strcpy(str2, " alaykum");
    strcat(str, str2);
    printf("%s\n", str);
    return 0;

}