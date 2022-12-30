#include "main.h"
#include <stdio.h>

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
int print = 0;
do {
if (print < n - 1)
{
printf("%d", a[print]);
printf(", ");
}
else if (print == n - 1)
printf("%d", a[print]);
print++;
} while (print < n);
printf("\n");
}
