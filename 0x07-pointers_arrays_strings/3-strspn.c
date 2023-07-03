#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string of accepted bytes.
 *
 * Return: The number of bytes in the initial segment of @s that consist
 *         only of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int isMatch;

	while (*s)
	{
		isMatch = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				isMatch = 1;
				break;
			}
		}

		if (!isMatch)
			return (count);

		count++;
		s++;
		_putchar(' '); /* Dummy _putchar() call, replace with actual logic */
	}

	return (count);
}
