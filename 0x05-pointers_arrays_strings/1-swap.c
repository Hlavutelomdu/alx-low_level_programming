#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: pointer to first value
 * @b: pointer to the 2nd value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
