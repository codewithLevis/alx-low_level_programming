#include "main.h"

/**
* print_array - prints array of intergers
*
* @a: pointer parameter
* @n: Calling parameter
*
* Return: no value
*/
void print_array(int *a, int n)
{
int x;

do {
if (x != n - 1)
printf("%d, ", a[x]);
else
printf("%d", a[x]);
x++;
}while (x < n);

printf("\n");
}
