#include <stdio.h>
#include <limits.h>

int main () {
    int son = 3; 
    printf("%d\n", son); 
    son = 4; 
    printf("%d\n", son);

    int son1 = INT_MIN;
    int son2 = INT_MAX;
    printf("INT toifa qabul qiluvchi:\neng kichik son = %d\neng katta son = %d\n", son1, son2);


    short int son3 = SHRT_MIN;
    short int son4 = SHRT_MAX;
    printf("SHORT INT toifa qabul qiluvchi:\neng kichik son = %d\neng katta son = %d\n", son3, son4);

    return 0;

}