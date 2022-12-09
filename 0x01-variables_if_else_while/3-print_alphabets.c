#include <stdio.h>

/**
 * main - Use for loop
 * Description: 'Prints alphabetics both upper and lower '
 * Return: 0
 */
int main(void)
{
	char  alphabetic;

	for (alphabetic = 'a'; alphabetic <= 'z'; alphabetic++)
{
	putchar(alphabetic);
}
	for (alphabetic = 'A'; alphabetic <= 'Z'; alphabetic++)
{
	putchar(alphabetic);
}
	putchar('\n');
	return (0);
}
