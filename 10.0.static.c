#include <stdio.h>
#define bool char
#define true 0
#define false 1

int runner() {
    static int count = 0;
    count++;
    return count;
}

static void fun(void) {
    printf("I am a static function.");
}

int main() {
    
    printf("%d ", runner());
    printf("%d ", runner());

    return 0;
}