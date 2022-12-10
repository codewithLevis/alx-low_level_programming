#include <stdio.h>
/**
*main - print alphabetics
*
*Description: 'prints the lowercase alphabet in reverse'
*
* Return: value 0
*/
int main(void)
{
char alphabetic;

for (alphabetic = 'z'; alphabetic >= 'a'; alphabetic--)
{
 putchar(alphabetic);
}
	putchar('\n');
	return (0);
}
