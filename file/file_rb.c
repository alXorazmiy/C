#include <stdio.h>


typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;


int main () {
    FILE *file = fopen("dat_files/data.dat", "rb");
    if (file == NULL) {
        printf("Fayl ochilmadi!");
        return 0;
    }
    Employee emp;
    fread(&emp, sizeof(Employee), 1, file);
    fclose(file);

    printf("ID: %d, Name: %s, Salary:  %.2f", emp.id, emp.name, emp.salary);
    return 0;
}