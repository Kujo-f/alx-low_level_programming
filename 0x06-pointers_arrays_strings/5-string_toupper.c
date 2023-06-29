#include "main.h"

/**
 * string_toupper - Converts lowercase letters of a string to uppercase
 * @str: The string to convert
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
