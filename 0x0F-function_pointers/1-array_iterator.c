#include "function_pointers.h"
/**
*array_iterator - executes a function given as a parameter
*on each element of an array
*
*@array: pointer to an array
*@size: size of the array
*@action:pointer to the function to be used
*
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array != NULL && action != NULL)
	{
		for (m = 0; m < size; m++)
		{
			action(array[m]);
		}
	}
}
