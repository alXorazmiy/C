#include <stdio.h>
#include <string.h>


typedef struct {
    char model[20];
    char color[20];
    int year;
    int cost;
} Car;


int main() {
    Car car[2];
    for (int i = 0; i < 2; i++) {
        printf("%d-Moshina modelini kiriting: ", i + 1);
        scanf("%19s", car[i].model);
        printf("%d-Moshina rangini kiriting: ", i + 1);
        scanf("%19s", car[i].color);
        printf("%d-Moshina yilini kiriting: ", i + 1);
        scanf("%d", &car[i].year);
        printf("%d-Moshina narxini kiriting: ", i + 1);
        scanf("%d", &car[i].cost);
    }


    printf("\n\n\n\n");

    for (int i = 0; i < 2; i++) {
        printf("%d-Moshina modeli %s\n ", i + 1, car[i].model);
        printf("%d-Moshina rangi %s\n ", i + 1, car[i].color);
        printf("%d-Moshina yili %d\n ", i + 1, car[i].year);
        printf("%d-Moshina narxi %d\n ", i + 1, car[i].cost);

    }
    return 0;
}