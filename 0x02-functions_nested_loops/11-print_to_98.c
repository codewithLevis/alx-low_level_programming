#include <stdio.h>
/**
* print_to_98 - prints numbers ending at 98
*@n: argument
*Return: non-value
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n < 98)
{

putchar(',');
putchar(' ');
}
else if (n == 98)
break;
}
putchar('\n');
}
else if (n >= 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n > 98)
{
putchar(',');
putchar(' ');
}
else if (n == 98)
break;
}
putchar('\n');
}

}
