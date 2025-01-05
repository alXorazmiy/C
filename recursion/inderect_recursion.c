#include <stdio.h>

void kamaytirish(int *n);
void oshirish(int *n);



void kamaytirish(int *n) {
    if (*n <= 10) {
        printf("%d ", *n - 1);
       ( *n)++;
        oshirish(n);
    }
}


void oshirish(int *n){
    if ( *n <= 10) {
        printf("%d ", *n + 1);
       ( *n)++;
        kamaytirish(n);
    }
}

int main() {
    int n = 1;
    oshirish(&n);
    return 0;
}

