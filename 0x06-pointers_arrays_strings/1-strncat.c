#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to append
 * @n: The maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr)
		dest_ptr++;

	/* Copy up to n bytes from src to dest */
	while (*src && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Add terminating null byte */
	*dest_ptr = '\0';

	return dest;
}
