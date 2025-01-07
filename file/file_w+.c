#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    FILE *file = fopen("files/example2.txt", "w+");
    char text[1000];
    if (file == NULL) {
        printf("fayl ochilmadi!\n");
        return 0;
    }
    fread(text, sizeof(text), 1000, file);
    printf("%s\n", text);

    char text2[1000];
    fgets(text2, sizeof(text2), stdin);
    text2[strlen(text2) - 1] = '\0';

    fprintf(file, "%s", text2);

    fclose(file);

    return 0;
}