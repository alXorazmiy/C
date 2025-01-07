#include <stdio.h>

#pragma pack(1)
typedef struct {
    double price;
    union {
        struct {
            char *title;
            char *author;
            int num_pages;
        } books;
        struct {
            int color;
            int size;
            char *design;
        } shirt;
    } item;
} Store;


int main() {
    Store s;
    s.item.books.title = "The Alchemist";
    s.item.books.author = "Paulo Coelho";
    s.item.books.num_pages = 197;
    printf("%s\n", s.item.books.title);
    printf("%ld\n", sizeof(s));
    return 0;
}