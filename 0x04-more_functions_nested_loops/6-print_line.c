#include "main.h"

/**
 * print_line - draws a straight line in a terminal
 * @n: number of times the character '_' should be printed
 */
void print_line(void)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
