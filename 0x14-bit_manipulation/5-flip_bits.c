#include "main.h"

/**
 * flips_bits:counts number of bits to change
 * toget from one bit ot another
 * @n: number 
 * @m: number
 * return number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int g, counted = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (g = 63; g >= 0; g--)
	{
		current = exclusive >> g;
		if (current & 1)
			counted++;
	}

	return (counted);
}
