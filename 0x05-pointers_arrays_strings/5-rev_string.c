#include "main.h"
/**
 * function reverses the contents of a string
 *
 * return null
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;
    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }
    /* Reverse the string using two pointers */
    start = 0;
    end = length - 1;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
