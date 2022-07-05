#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 * followed by a new line.
 * Return: 0 Always
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (int i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
