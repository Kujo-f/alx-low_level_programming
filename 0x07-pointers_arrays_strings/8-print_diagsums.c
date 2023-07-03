#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0; /* Sum of the main diagonal */
	int sum2 = 0; /* Sum of the secondary diagonal */

	/* Calculate sum of the main diagonal */
	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	/* Calculate sum of the secondary diagonal */
	for (int i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - 1 - i));
	}

	/* Print the sums */
	int temp = sum1;
	while (temp > 0)
	{
		_putchar('0' + (temp % 10));
		temp /= 10;
	}
	_putchar('\n');

	temp = sum2;
	while (temp > 0)
	{
		_putchar('0' + (temp % 10));
		temp /= 10;
	}
	_putchar('\n');
}
