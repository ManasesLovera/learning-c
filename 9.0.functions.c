#include<stdio.h>

int foo(int bar);
void show(int foo);

int main() {

    show( foo(1) );
    return 0;
}

int foo(int bar) {
    return bar * 2;
}

void show(int foo) {
    printf("%d\n", foo);
}