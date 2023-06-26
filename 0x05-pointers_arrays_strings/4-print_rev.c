#include "main.h"

/**
 * function prints a string in reverse
 */
void print_rev(char *s) {
    int length = 0;
    
    /*Calculate the length of the string*/
    while (s[length] != '\0') 
    {
        length++;
    }
    
    /*Print the string in reverse order*/
    for (int i = length - 1; i >= 0; i--) 
    {
        _putchar(s[i]);
    }
    
    _putchar('\n');
}
