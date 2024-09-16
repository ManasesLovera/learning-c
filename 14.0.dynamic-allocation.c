#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * name;
    int age;
} person;

int main() {

    person * myperson = (person *) malloc(sizeof(person));

    myperson->name = "John Doe";
    myperson->age = 24;

    printf("My name is %s and I'm %d years old.\n", myperson->name, myperson->age);

    free(myperson);

    return 0;
}