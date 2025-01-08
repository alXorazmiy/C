#include <stdio.h>
#include <stdlib.h>
#include <string.h>



const char* PERSON_FORMAT_OUT = 
"{\n\t\"name\":\"%s\", \n\t\"age:\": %d,\n\t\"gender\": \"%c\"\n}\n";


typedef struct {
    char name[20];
    int age;
    char gender;
} Person;



int main (int argc, char *argv[]) {
    int length;
    printf("Nechta odam qo'shmoqchisiz: ");
    scanf("%d", &length);
    Person persons[length];
    
    FILE *file = fopen("dat_files/persons.dat", "a+");
    if (file == NULL) {
        printf("Fayl ochilmadi!\n");
        return 1;
    }
    for (int i = 0; i < length; i++ ) {
        printf("Ism kiriting: ");
        scanf("%s", persons[i].name);
        printf("Yoshini kiriting: ");
        scanf("%d", &persons[i].age);
        printf("Jinsini kiriting: ");
        scanf(" %c", &persons[i].gender);

        fprintf(file, PERSON_FORMAT_OUT, persons[i].name, persons[i].age, persons[i].gender);
    }

    fclose(file);
    return 0;
}