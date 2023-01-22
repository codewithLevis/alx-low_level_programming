#include <stdlib.h>
#include <stdio.h>

/**
*main - outputs opcodes
*
*@argc: number of arguments
*@argv: array of arguments
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	char *ptr;
	int m, byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;
	m = 0;

	while (m < byte)
	{
		if (m == byte - 1)
		{
			printf("%02hhx\n", ptr[m]);
			break;
		}

		printf("%02hhx ", ptr[m]);
		m++;
	}
	return (0);
}
