#include <stdio.h>

void addone(int *n) {
    (*n)++;
}

typedef struct {
    int x;
    int y;
} point;

struct point2 {
    int x;
    int y;
};

void move(point * p) {
    p->x += 1;
    p->y += 2;
}

int main() {

    int n;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);

    point p;
    p.x = 2;
    p.y = 3;

    move(&p);

    printf("\nThe value of x = %d, and the value of y = %d\n", p.x, p.y);

    return 0;
}