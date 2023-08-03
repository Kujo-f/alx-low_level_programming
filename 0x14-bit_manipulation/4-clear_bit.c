#include "main.h"

/**
 * clear_bit: sets value of bit to 0
 * @n: points to number to change
 * @index:index of bit for clearence
 *
 *return 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
