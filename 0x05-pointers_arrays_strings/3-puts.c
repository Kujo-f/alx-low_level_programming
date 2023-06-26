#include "main.h"

/**
 * _puts - prints a string follewed by a new line
 *
 * Returns void
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
