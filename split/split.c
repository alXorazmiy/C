#include <stdio.h>
#include <stdlib.h>

void split(char ***string_list, char string[], char symbol) {
    int i = 0;
    int index_i = 0;
    int index_j = 0;
    int memory_i = 10;
    int memory_j = 10;


    *string_list = malloc(sizeof(char *) * memory_i);
    if (*string_list == NULL) {
        printf("Xotira ajratilmadi!\n");
        exit(1);
    }

    (*string_list)[index_i] = malloc(sizeof(char) * memory_j);
    if ((*string_list)[index_i] == NULL) {
        printf("Xotira ajratilmadi!\n");
        exit(1);
    }

    do {
        if (string[i] != symbol) {
            if (index_j >= memory_j - 1) {  
                memory_j += 10;
                (*string_list)[index_i] = realloc((*string_list)[index_i], sizeof(char) * memory_j);
                if ((*string_list)[index_i] == NULL) {
                    printf("Xotira ajratilmadi!\n");
                    exit(1);
                }
            }
            (*string_list)[index_i][index_j] = string[i];
            index_j++;
        } else {
            (*string_list)[index_i][index_j] = '\0'; 
            index_j = 0;
            memory_j = 10;
            index_i++;

            if (index_i >= memory_i) {
                memory_i += 10;
                *string_list = realloc(*string_list, sizeof(char *) * memory_i);
                if (*string_list == NULL) {
                    printf("Xotira ajratilmadi!\n");
                    exit(1);
                }
            }

            (*string_list)[index_i] = malloc(sizeof(char) * memory_j);
            if ((*string_list)[index_i] == NULL) {
                printf("Xotira ajratilmadi!\n");
                exit(1);
            }
        }
        i++;
    } while (string[i] != '\0');

    (*string_list)[index_i + 1] = NULL; 
}

int main() {
    char string[] = "Assalomualaykum, mening ismim Husniddinjon";
    char **string_list = NULL;
    char symbol = 'm';

    split(&string_list, string, symbol);

    // Natijani chiqarish
    for (int i = 0; string_list[i] != NULL; i++) {
        printf("%s\n", string_list[i]);
        free(string_list[i]);
    }
    free(string_list);

    return 0;
}
