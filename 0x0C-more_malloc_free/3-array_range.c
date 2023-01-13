#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers
*The array created should contain all the values from min (included) to max (included)
*ordered from min to max
*@min: minimum range
*@max: maximum range
*Return: the pointer to the newly created array or NULL If malloc fails
*/

int *array_range(int min, int max)
{
	int *arrays;
	int range, m;
	
	if (min >max)
		return (NULL);
	
	range = max - (min + 1);
	arrays = (int *) malloc(sizeof(int) * range);
	
	if (arrays == NULL)
		return (NULL);
	
	m = 0;
	
	do {
		arrays[m] = min + m;
		m++;
	} while (m < range);
	
	return (arrays);
}
		
	
	
