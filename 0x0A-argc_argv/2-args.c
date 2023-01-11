#include <stdio.h>

/**
*main - prints all arguments a program receives
*
*@argc: number of arguments passed to the program
*@argv: arryays of strings
*
*Return: (0)
*/

int main(int argc, char *argv[])
{
	int count = 0;

	do {
		printf("%s\n", argv[count]);
		count++;
	} while (count < argc);

	return (0);
}
