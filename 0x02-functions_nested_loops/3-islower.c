#include <stdio.h>

/**
 * _islower - checks for lowercase character.
 * @c, is a character to check.
 * Return: 1 if ch is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
