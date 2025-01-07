#include <stdio.h>
#include <string.h>


typedef struct {
    char model[20]; 
}Car;

int main() {
    Car car1;
    Car car2;

    strcpy(car1.model, "Malibu");
    strcpy(car2.model, "Gentra");

    printf("%s\n", car1.model);
    printf("%s\n", car2.model);

    return 0;
}