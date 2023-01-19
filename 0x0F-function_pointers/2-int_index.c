#include "function_pointers.h"

/**
*int_index - searches for an integer
*
*@array: pointer to an array
*@size: size of array
*@cmp: pointer to function to be used in comaparison
*
*Return: -1 if size <= 0 or If no element matches
*index of of interger
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (m = 0; m < size; m++)
		{
			if (cmp(array[m]) != 0)
				return (m);
		}
	}
	
	return (-1);
}
