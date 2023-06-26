#include "main.h"

/*
 * the function print a string in reverse
 */
void print_rev(char *s) 
{
    int length = 0;
    int i;
    /* Calculate the length of the string*/
    while (s[length] != '\0') 
    {
        length++;
    }

    i  = length - 1;

    while (i >= 0) 
    {
        _putchar(s[i]);
        i--;
    }
   
    _putchar('\n');
}

