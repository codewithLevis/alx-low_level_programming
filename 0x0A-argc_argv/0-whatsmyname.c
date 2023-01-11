#include <stdio.h>

/**
*main - prints its name, followed by a new line
*
*@argc: contains the number of arguments passed to the program
*@argv: Array of strings for arguments passed to the program
*Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
