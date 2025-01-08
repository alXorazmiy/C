#include <stdio.h>


int main( int argc, char *argv[]) {
    FILE *file = fopen("files/seek_end.txt", "w");
    if (file == NULL) {
        return 1;
    }
    fprintf(file, "Hello, World!");
    fseek(file, -5, SEEK_END);
    fprintf(file, "C++");
    fclose(file);
    return 0;
}