#include "main.h"

/**
*print_buffer - prints a buffer
*@b: pointer for byte size
*@size: byte size
*Return: non-value
*/
void print_buffer(char *b, int size)
{
	int offset, byte_count, i;
	offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (offset = 0; offset < size; offset += 10)
	{
		byte_count = (size - offset) < 10 ? (size - offset) : 10;
		printf("%08x: ", offset);
		for (i = 0; i < 10; i++)
		{
			if (i < byte_count)
				printf("%02x", *(b + offset + i));
			else
				printf("  ");

			if (i % 2)
			printf(" ");
		}
		for (i = 0; i < byte_count; i++)
		{
		int byte = *(b + offset + i);

		if (byte < 32 || byte > 132)
			byte = '.';

		printf("%c", byte);
		}
		printf("\n");
	}
}

