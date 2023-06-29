#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) format
 * @str: The string to encode
 *
 * Return: Pointer to the resulting encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = leet_nums[j];
		}
	}

	return str;
}
