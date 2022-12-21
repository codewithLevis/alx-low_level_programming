#include "main.h"
/**
* swap_int -  swaps the values of two integers
*
* @a: first swapping parameter
* @b: second swapping parameter
*
* Return: non-value
*/

void swap_int(int *a, int *b)
{
int shift;

shift = *a;
*a = *b;
*b = shift;
}
