#include <stdio.h>

int main() {

    int foo[1][2][3];

    char vowels[1][5] = {
        {'a', 'e', 'i', 'o', 'u'}
    };

    char vowels2[][5] = {
        {'A','E','I','O','U'},
        {'a','e','i','o','u'}
    };

    /*Below is an array with 3 rows and each row has 4 columns. 
    To make it easier, you can forget the 3 and keep it blank, it'll still work.*/
    int a[3][4] = {
        {0,1,2,3}, /*  initializers for row indexed by 0 */
        {4,5,6,7}, /*  initializers for row indexed by 1 */
        {8,9,10,11} /*  initializers for row indexed by 2 */
    };

    /* The inside braces, which indicates the wanted row, are optional. 
    The following initialization is the same to the previous example −*/
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    return 0;
}