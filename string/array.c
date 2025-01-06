#include <stdio.h>
#include <string.h>



int main() {
    char *strings[] = {
        "Hello",
        "World",
        "C",
        "Programming",
        "Language"
    };

    int length = sizeof(strings) / sizeof(strings[0]);
    for(int i = 0; i < length; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}