#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


int main() {
    srand(time(0));
    printf("%d\n", rand());
    int min = 1, max = 100;
    int random_number = min + rand() % (max - min + 1);

    printf("1 dan 100 gacha bo'lgan tasodifiy son: %d\n", random_number);

    return 0;
}