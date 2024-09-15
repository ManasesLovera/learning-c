#include <stdio.h>
#include <string.h>

int main() {

    char * name = "John";
    printf("%s\n", name);
    
    int a = 1;

    int * pointer_to_a = &a;

    a += 1;
    *pointer_to_a += 1;

    printf("The value a is %d\n", a);
    printf("The value of pointer a is %d\n", *pointer_to_a);
    
    return 0;
}