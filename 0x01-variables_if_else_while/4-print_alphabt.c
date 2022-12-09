#include <stdio.h>
/**
 * main - Use for loop
 *
 * Description: 'Prints alphabetics in lower except q and e '
 *
 * Return: 0
 */
int main(void)
{
	char  alphabetic;

	for (alphabetic = 'a'; alphabetic <= 'z'; alphabetic++)
{
    if (alphabetic == 'e' || alphabetic == 'q')
        continue;
        putchar(alphabetic);
}
	putchar('\n');
	return (0);
}
