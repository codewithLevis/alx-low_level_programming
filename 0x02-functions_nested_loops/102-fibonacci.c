#include <stdio.h>
/**
*main - prints fibonacci numbers
*Return: 0
*/

int main(void) 
{
int i;
unsigned long int prev = 1, curr = 2, next;

printf("%lu ,", prev);
printf("%lu ,", curr);
i = 2;
while (i < 49)
{
next = prev + curr;
if (i < 49)
printf("%lu ,", next);
if (i == 49)
printf("%lu", next);
prev = curr;
curr = next;
i++;
}
putchar('\n');
return (0);
}
