#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the string containing the accepted characters.
 *
 * Return: Number of bytes in the initial segment of s consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int isAccepted;

	while (*s != '\0')
	{
		isAccepted = 0;

		/* Iterate through the accept string to check if *s is accepted */
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				isAccepted = 1;
				break;
			}
			a++;
		}

		if (!isAccepted)
			break;

		length++;
		s++;
	}

	return length;
}
