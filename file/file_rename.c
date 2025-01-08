#include <stdio.h>
#include <errno.h>
#include <string.h>


int main(int argc, char *argv[]) {
    int result = rename("files/example2.txt", "files/example3.txt");
    if (result == 0) {
        printf("Fayl nomi o'zgartirildi!\n");
    } else {
        printf("Fayl nomi o'zgartirilmadi! xatolik : %s\n", strerror(errno));
    }
    return 0;
}