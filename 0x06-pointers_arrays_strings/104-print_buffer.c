#include "main.h"
#include <stdio.h>
/**
*my_isprint - checks character between 32 and 126 in a string
*Return: 1 or 0
*/

int my_isprint(int c)
{
if (c >= 32 && c <= 126)
{
return 1;
}
return 0;
}

/**
*print_buffer - prints a buffer
*@b: pointer for byte size
*@size: byte size
*Return: non-value
*/
void print_buffer(char *b, int size)
{
int i, j;
if (size <= 0)
printf("\n");

for (i = 0; i < size; i++)
{
    if (i % 10 == 0)
    {
        printf("%08x: ", i);
    }

    printf("%02x ", b[i]);

    if ((i + 1) % 10 == 0)
    {
        j = i - 9;
        while (j <= i)
        {
            if (my_isprint(b[j]))
            {
                printf("%c", b[j]);
            }
            else

            {
                putchar('.');
            }
            j++;
        }
        printf("\n");
    }
}
}
