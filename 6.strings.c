#include <stdio.h>

int main() {

    // Strings in C are arrays of characters. we will use pointers to a character array to define simple strings. This method creates a string which we can only use for reading:
    char * name1 = "John Smith";
    // To define a string we can manipulate we need to define it as a local character array
    char name2[] = "John Smith";
    /* is the same as */
    char name3[11] = "John Smith";
    /*The reason that we need to add one, although the string John Smith is exactly 10 characters long, is for the string termination: a special character (equal to 0) which indicates the end of the string. The end of the string is marked because the program does not know the length of the string - only the compiler knows it according to the code.*/

    /* String formatting with printf */

    char * name = "John Smith";
    int age = 27;

    /*prints out 'John Smitn is 27 years old.'*/
    printf("%s is %d years old.\n", name, age);
    /*adding a newline (\n) so that our next printf statement will print in a new line*/

    /* String Length */

    /*The function 'strlen' return the length of the string*/
    char * newName = "Nikhil";
    printf("%d\n", strlen(newName));

    /* String comparison */

    /*The function 'strncmp' compares between two strings, returning the number 0 if they are equal, or a different number if they are different.
    
    There is also an unsafe version of this function called strcmp, but it is not recommended to use it*/

    char * anotherName = "John";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hello, John!\n");
    } else {
        printf("You are not John. Go away.\n");
    }

    /* String Concatenation */

    /*The function 'strncat' appends first n characters of src string to the destination string when n is min(n,length(src)); The arguments passed are destination string, source string, and n - maximum number of characters to be appended.*/

    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);
    
    return 0;
}