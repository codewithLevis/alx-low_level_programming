#include <stdio.h>
/**
*main - print alphabetics
*
*Description:outputs_the alphabets using putchar_func
*
* Return: value 0 
*/
int main(void)
{
	char alphabetic = 'a';
	
	for (alphabetic = 'a'; alphabetic <= 'z'; alphabetic++)
		
		putchar(alphabetic);
	putchar('\n');
	return (0);
}
