#include <stdio.h>
#include <stdlib.h>
#include <string.h>



const char* PERSON_FORMAT_IN = 
"{\n\t\"name\":\"%[^\"]\", \n\t\"age:\": %d,\n\t\"gender\": \"%c\"\n}\n";



typedef struct {
    char name[20];
    int age;
    char gender;
} Person;

int main (int argc, char *argv[]) {
    Person *persons = malloc(sizeof(Person) * 2);
    int i = 0;
    int capacity = 2;
    FILE *file = fopen("dat_files/persons.dat", "r");
    if (file == NULL) {
        printf("Fayl ochilmadi!\n");
        free(persons);
        return 1;
    }
    while (fscanf(file, PERSON_FORMAT_IN, persons[i].name, &persons[i].age, &persons[i].gender) == 3) {
        i++;
        if (i >= capacity) {
            capacity *= 2;
            persons = realloc(persons, sizeof(Person) * capacity);
        }
    }


    for (int j = 0; j < i; j++) {
        printf("Name: %s, Age: %d, Gender: %c\n", persons[j].name, persons[j].age, persons[j].gender);
    }

    fclose(file);
    free(persons);
    return 0;
}
