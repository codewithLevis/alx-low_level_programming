#include "main.h"

/**
*main - prints a function _putchar
*
*Return: 0
*/
int main(void)
{
char output[9] = "_putchar";
int i = 0;
while (i < 9)
{
_putchar(output[i]);
i++;
}
_putchar('\n');
return (0);
}
