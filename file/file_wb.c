#include <stdio.h>


typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;


int main() {
    FILE *file = fopen("dat_files/data.dat", "wb");
    if (file == NULL) {
        printf("Fayl ochilmadi!");
        return 0;
    }

    Employee emp = {1, "Raxmonov Husniddin", 1000.0};
    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);
    return 0;
}