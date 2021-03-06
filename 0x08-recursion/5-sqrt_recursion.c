#include "main.h"

int actual_sqrt_recursion(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 *
 * Return: the result of Sroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - recurses 2 find the sqrt
 * @n: number to calculate the sqrt
 * @i: iterator
 *
 * Return: the results
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
