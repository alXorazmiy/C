#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[] ) {
    char text[100];
    printf("Satr kiriting: ");
    fgets(text, 100, stdin);
    text[strlen(text) - 1] = '\0';
    
    printf("%s\n", text);
    return 0;
}