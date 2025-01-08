


#include <stdio.h>
#include <errno.h>
#include <string.h>


int main(int argc, char *argv[]) {
    int result = remove("files/remove.txt");
    if (result == 0) {
        printf("Fayl o'chirildi!\n");
    } else {
        printf("Fayl o'chirilmadi! Xatolik: %s\n", strerror(errno));
        FILE *file = fopen("files/remove.txt", "w");
        fclose(file);
        printf("Fayl yaratildi! Iltimos boshqatdan urinib ko'ring\n");
    }
    return 0;
}