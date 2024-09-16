#include<stdio.h>
#include<stdlib.h>

int main() {

    char vowels[] = {'A','E','I','O','U'};
    char *pvowels = vowels;

    int i;
    for (i = 0; i < 5; i++) {
        printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }

    for (i = 0; i < 5; i++) {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }

    // Dynamic memory allocation for arrays

    int n = 5;

    char *p_vowels = (char *) malloc(n * sizeof(char));
    int i;

    p_vowels[0] = 'A';
    p_vowels[1] = 'E';
    *(p_vowels + 2) = 'I';
    p_vowels[3] = 'O';
    *(p_vowels + 4) = 'U';

    for (i = 0; i < n; i++) {
        printf("%c", p_vowels[i]);
    }

    printf("\n");

    free(p_vowels);

    // Dynamic memory allocation for a two-dimensional array

    int nrows = 2;
    int ncols = 5;
    int i, j;

    // Allocate memory for nrows pointers
    char **vector = (char **) malloc(nrows * sizeof(char *));

    // For each row, allocate memory for ncols elements
    vector[0] = (char *) malloc(ncols * sizeof(char));
    vector[1] = (char *) malloc(ncols * sizeof(char));

    vector[0][0] = 'A';
    vector[0][1] = 'E';
    vector[0][2] = 'I';
    vector[0][3] = 'O';
    vector[0][4] = 'U';

    vector[1][0] = 'a';
    vector[1][1] = 'e';
    vector[1][2] = 'i';
    vector[1][3] = 'o';
    vector[1][4] = 'u';

    for (i = 0; i < nrows; i++) {
        for (j = 0; j < ncols; j++) {
            printf("%c ", vector[i][j]);
        }
        prinft("\n");
    }

    // Free individual rows
    free(vector[0]);
    free(vector[1]);

    // Free the top-level pointer
    free(vector);

    return 0;
}