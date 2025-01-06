#include <stdio.h>

void fun1(char *string1, char *string2) {
    char *tmp;
    tmp = string1;
    string1 = string2;
    string2 = tmp;
}

void fun2(char **string1, char **string2) {
    char *tmp;
    tmp = *string1;
    *string1 = *string2;
    *string2 = tmp;
}



int main() {
    char *string1 = "Hi", *string2 = "Bye";
    fun1(string1, string2);
    printf("%s %s", string1, string2);
    fun2(&string1, &string2);
    printf(" %s %s\n", string1, string2);
    return 0;
}