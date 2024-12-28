#include <stdio.h>

int main() {
    printf("Sizga nechta qatorli piramida kerak : ");
    int pyramid;
    scanf("%d", &pyramid);

    int stars = 1;
  
    for (int i = 0; i < pyramid; i++) {
        for (int j = pyramid - i; j > 0; j--) {
            printf(" ");
        }
        for(int j = 0; j < stars; j++) {
            printf("*");
        }
        stars += 2;
        printf("\n");
    }



    return 0;
}