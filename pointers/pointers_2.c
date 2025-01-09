#include <stdio.h>
#include <stdlib.h>


int main () {
    long long a = 15;
    long long b = 20;
    long long c[] = {1, 2, 3};
    
    long long *p = &a + &b;
    printf("Qiymat = %lld\naddress = %p\n", *p, p);
    return 0;
}