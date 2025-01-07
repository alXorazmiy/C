#include <stdio.h>


int main (int argc, char *argv[]) {
    FILE *file = fopen("files/example.txt", "r");
    char text[1000];
    if (file == NULL) {
        printf("fayl ochilmadi!\n");
        return 0;
    }
    fread(text, sizeof(text), 1000, file);
    printf("%s\n", text);

    fclose(file);

    return 0;
}