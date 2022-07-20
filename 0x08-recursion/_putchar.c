#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: charecter to be printed
 *
 * Return: 1 on sucess, and -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
