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


void getMiddlePoint2(Point *p1, Point *p2, Point *middle) {
    middle->x = (p1->x + p2->x) / 2;
    middle->y = (p1->y + p2->y) / 2;
}

int main() {
    Point p1 = {.x = 1, .y = 1};
    Point p2 = {.x = 2, .y = 3};
    Point middle;
    Point middle2;
    middle = getMiddlePoint(p1, p2);
    getMiddlePoint2(&p1, &p2, &middle2);
    printf("x = %f y = %f\n",middle.x, middle.y);
    printf("x = %f y = %f\n",middle2.x, middle2.y);

    return 0;
}