#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: number to count from
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar(n % 10 + '0');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
