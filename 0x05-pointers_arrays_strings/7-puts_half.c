#include "main.h"

/**
 * function that prints half of a string, followed by a new line
 * return null
 */
void puts_half(char *str)
{
    int length = 0;
    int i, start_index;

    /* Calculate the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Calculate the starting index for printing the second half */
    if (length % 2 == 0)
    {
        start_index = length / 2;
    }
    else
    {
        start_index = (length - 1) / 2;
    }

    /* Print the second half of the string */
    for (i = start_index; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
