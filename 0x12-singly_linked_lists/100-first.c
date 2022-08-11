#include <stdio.h>

void first(void)__attribute__((constructor));

/**
 * fist - prints a sentance before main
 * fuction is executed
 */
void first(void)
{
	printf("Yu're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
