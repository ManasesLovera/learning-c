#include <stdio.h>

int main() {

    int target = 10;
    if (target == 10) {
        printf("Target is equal to 10");
    }
    else {
        printf("Target is not equal to 10");
    }

    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo is smaller than bar AND moo is larger than bar.");
    }
    else if (foo < bar || moo > bar) {
        printf("foo is smaller than bar OR moo is larger than bar.");
    }

    // You can also nest if else statements if you like.
    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80) {
        if (peanuts_eaten < max_peanut_limit) {
            printf("Take as many peanuts as you want!\n");
        }
    } else {
        if (peanuts_eaten > peanuts_in_jar) {
            printf("You can't have anymore peanuts!\n");
        }
        else {
            printf("Alright, just one more peanut.\n");
        }
    }

    return 0;
}