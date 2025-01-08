#include <stdio.h>


int main( int argc, char *argv[]) {
    FILE *file = fopen("files/seek_cur.txt", "w");
    if (file == NULL) {
        return 1;
    }
    fprintf(file, "Hello, World!");

    fseek(file, 10, SEEK_CUR);
    fprintf(file, "C++");

    fclose(file);
    return 0;
}