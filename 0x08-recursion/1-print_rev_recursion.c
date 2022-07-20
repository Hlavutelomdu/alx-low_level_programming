#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: 1 on suc and -1 in error
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(s);
}
