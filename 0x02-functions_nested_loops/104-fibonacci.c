#include <stdio.h>
/**
*main - prints fibonnaci numbers
*
*Return: 0
*/

int main(void)
{
int i;
unsigned long n1, n2, n3, n4;
unsigned long h1, h2;
unsigned long prev = 0, curr = 1, next;

i = 0;
while (i < 92)
{
next = prev + curr;
if (i < 97)
printf("%lu, ", next);
if (i == 97)
printf("%lu", next);
prev = curr;
curr = next;
i++;
}
i = 93;
n1 = prev / 10000000000;
n3 = curr / 10000000000;
n2 = prev % 10000000000;
n4 = curr % 10000000000;
for (; i < 99; i++)
{
h1 = n1 + n3;
h2 = n2 + n4;
if (n2 + n4 > 9999999999)
{
h1 = h1 + 1;
h2 = h2 % 10000000000;
}
printf("%lu%lu", h1, h2);
if (i != 98)
printf(", ");
n1 = n3;
n2 = n4;
n3 = h1;
n4 = h2;
}
printf("\n");
return (0);
}
