#include "main.h"

int actual_prime(int, int);

/**
 * _is_prime_number - says if an interger is a prime or not
 * @n: number to evaluate
 *
 * Return: 1 if n is prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if the number is prime or not
 * @n: number to evaluate
 *
 * Return: 1 if n is prime and 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
