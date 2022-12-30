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
printf("%d", a[print]);
if (print < n - 1)
printf(", ");
print++;
} while (print < n);
printf("\n");
}
