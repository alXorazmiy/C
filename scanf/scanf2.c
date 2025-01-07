#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    char text[100];
    printf("Satr kiriting: ");
    // scanf("%s", text);
    scanf("%[^\n]s", text);
    printf("Siz quyidagi satrni kiritdingiz: %s", text);
    return 0;
}