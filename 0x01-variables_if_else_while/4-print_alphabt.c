#include <stdio.h>

/**
 * main - prints alphabets in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0(success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
