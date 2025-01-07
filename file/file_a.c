#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    FILE *file = fopen("files/example.txt", "a");
    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi!\n");
        return 0;
    }

    char text[1000];
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0';

    fprintf(file, "%s", text);

    fclose(file);


    return 0;
}