#include "main.h"
/**
*print_diagsums - prints the sum of the two diagonals
*The diagonals are of square matrix of integers
*
*@a: pointer to square matrix of integers
*@size: size of square matrix of integers
*
*Return: non-value
*/
void print_diagsums(int *a, int size)
{
int x = 0, fir_sum = 0, sec_sum = 0;

do {
fir_sum += a[x * size + x];
sec_sum += a[x * size + (size - x - 1)];

x++;
} while (x < size);

printf("%d, %d\n", fir_sum, sec_sum);
}
