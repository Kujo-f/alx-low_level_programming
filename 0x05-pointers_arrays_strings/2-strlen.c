#include "main.h"

/**
 * _strlen - for finding the length of string
 *
 * Returns the value of the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0') 
	{
		length ++;
		s++;
	}
	return (length);
}
