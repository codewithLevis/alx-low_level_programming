#include <stdio.h>
/**
*main - print numbers
*
*Description: 'prints all the numbers of base 16 in lowercase'
*
* Return: value 0
*/
int main(void)
{
char hexadecimal;

for (hexadecimal = '0'; hexadecimal <= '9'; hexadecimal++)
{
putchar(hexadecimal);
}
for (hexadecimal = 'a'; hexadecimal <= 'f'; hexadecimal++)
{
putchar(hexadecimal);
}
	putchar('\n');
	return (0);
}
