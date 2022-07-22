#include <stdio.h>
#include "main.h"

/**
 * main - printthe number of arg passed to it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[]_attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
