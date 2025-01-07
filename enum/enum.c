#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day today;
    today = WEDNESDAY;

    printf("Bugun kun raqami: %d\n", today);
    return 0;
}
