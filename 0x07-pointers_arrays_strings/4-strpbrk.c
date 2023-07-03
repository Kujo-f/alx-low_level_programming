#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr;
	char *a_ptr;

	while (*s != '\0')
	{
		s_ptr = s;
		a_ptr = accept;

		while (*a_ptr != '\0')
		{
			if (*s_ptr == *a_ptr)
				return s_ptr;

			a_ptr++;
		}

		s++;
	}

	return NULL;
}
