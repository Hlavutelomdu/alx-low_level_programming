#include <stdio.h>

/**
 * fist - prints a sentance before main
 * fuction is executed
 */
void __attribute__((constructor)) first()
{
	printf("Yu're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
