# include "main.h"


/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - Prints a number
 * @n: The number to print
 *
 * Description: Uses recursion to handle negative numbers
 */
void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements to print
 *
 * Description: Numbers are separated by comma and space, followed by a new line.
 * The numbers should be displayed in the same order as they are stored in the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_number(a[i]);

		/* Print comma and space for all elements except the last one */
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
