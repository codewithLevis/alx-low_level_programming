#include <stdio.h>

void print_before(void) __attribute__ ((constructor));

/**
 * print_before -  function that prints
 *before the main function is executed
 * Return: void
 */

void print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
