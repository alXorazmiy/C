#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* PERSON_FORMAT_IN = 
"{\n\t\"name\":\"%[^\"]\", \n\t\"age:\": %d,\n\t\"gender\": \"%c\"\n}";
const char* PERSON_FORMAT_OUT = 
"{\n\t\"name\":\"%s\", \n\t\"age:\": %d,\n\t\"gender\": \"%c\"\n}\n";

typedef struct {
    char name[20];
    int age;
    char gender;
} Person;

int main(int argc, char *argv[]) {
    Person p1 = {
        .name = "Husniddin",
        .age = 27,
        .gender = 'M'
    };
    Person p2;


    FILE *file = fopen("dat_files/people.dat", "a+");
    if (file == NULL) {
        printf("Fayl ochilmadi! \n");
        return 1;
    }


    fprintf(file, PERSON_FORMAT_OUT, p1.name, p1.age, p1.gender);
    fseek(file, 0, SEEK_SET);
    fscanf(file, PERSON_FORMAT_IN, p2.name, &p2.age, &p2.gender);
    printf(PERSON_FORMAT_OUT, p2.name, p2.age, p2.gender);
    fclose(file);

    return 0;
}
