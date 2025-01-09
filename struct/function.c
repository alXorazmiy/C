#include <stdio.h>


typedef struct {
    double x, y;
} Point;


Point getMiddlePoint(Point p1, Point p2) {
    Point m;
    m.x = (p1.x + p2.x) / 2;
    m.y = (p1.y + p2.y) / 2;
    return m;
}


int main() {
    Point p1 = {.x = 1, .y = 1};
    Point p2 = {.x = 2, .y = 3};
    Point middle;
    middle = getMiddlePoint(p1, p2);
    printf("x = %f y = %f\n",middle.x, middle.y);

    return 0;
}