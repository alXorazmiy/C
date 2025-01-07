#include <stdio.h>
#include <string.h>


struct Car {
    char model[20]; 
};

int main() {
    struct Car car1;
    struct Car car2;

    strcpy(car1.model, "Malibu");
    strcpy(car2.model, "Gentra");

    printf("%s\n", car1.model);
    printf("%s\n", car2.model);

    return 0;
}