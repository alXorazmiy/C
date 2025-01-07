#include <stdio.h>


typedef union {
    int a;
    char b;
    double c;
} data;


int main () {
    data array[10]; 
    array[0].a = 10;
    array[1].b = 'a';
    array[2].c = 10.178;
    return 0;
}