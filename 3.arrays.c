// Arrays
#include <stdio.h>

int main() {

    int numbers[10];

    // numbers[0] = 10;
    // numbers[1] = 20;
    // numbers[2] = 30;
    // numbers[3] = 40;
    // numbers[4] = 50;
    // numbers[5] = 60;
    // numbers[6] = 70;
    // numbers[7] = 80;
    // numbers[8] = 90;
    // numbers[9] = 100;

    // My code:
    for(int i = 0; i < 10; i++) {
        numbers[i] = (i+1)*10;
    }

    printf("The 7th number in the array is %d.", numbers[6]);

    return 0;
}