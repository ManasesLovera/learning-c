#include <stdio.h>

struct point {
    int x;
    int y;
};

typedef struct {
    int x;
    int y;
} point2;

typedef struct {
    char * brand;
    int model;
} vehicle;

int main() {

    struct point p;
    p.x = 10;
    p.y = 5;

    point2 p2;
    p2.x = 10;
    p2.y = 5;

    vehicle mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;


    return 0;
}