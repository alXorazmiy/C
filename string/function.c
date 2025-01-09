#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void getString(char *s) {
    strcpy(s, "test");
}

int main() {
    char s[50];
    getString(s);
    printf("%s\n", s);
    return 0;
}