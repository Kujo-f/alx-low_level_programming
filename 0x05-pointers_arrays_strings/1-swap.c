#include "main.h"
/**
 * main - swaps the values of two integers
 *
 * return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
