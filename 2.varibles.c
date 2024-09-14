#include <stdio.h>

// C does not have a boolean type. Usually, it is
// defined using the following notation.
#define BOOL char
#define FALSE 0
#define TRUE 1

void exercise() {

    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;

    /* Your code goes here */
    sum = a + b + c;

    printf("The sum of a, b, and c is %f.", sum);
}

int main() {

    int foo;
    int bar = 1;

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d \n", a);

    exercise();

    return 0;
}

