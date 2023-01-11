#include <stdio.h>

/**
*main - prints the number of arguments passed into it
*
*@argc: number of arguments passed in a program
*@argv: string arrays passed
*
*Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = argc - 1;

	printf("%d\n", count);
	return (0);
}
