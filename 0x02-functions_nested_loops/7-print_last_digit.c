#include "main.h"

/**
 * print_last_digit - prints the last digit of s number
 * @n: the number to extract the last digit from
 * Return:value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < o)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	-putchar(a + '0');

	return (a);
}
