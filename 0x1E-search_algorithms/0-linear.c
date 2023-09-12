#include "search_algos.h"

/**
 * linear_search - a function employing linear search algorithim
 * to search for a value in an array
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return:  the first index where value is located
 * If value is not present in array or if array is NULL return == -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iter = 0;
	char *output = "Value checked array[%ld] = [%d]\n";

	if (array == NULL || size <= 0)
		return (-1);

	while (iter < size)
	{
		printf(output, iter, array[iter]);
		if (array[iter] == value)
			return ((int) iter);
		iter++;
	}

	return (-1);
}
