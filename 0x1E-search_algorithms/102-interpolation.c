#include "search_algos.h"

/**
 * interpolation_search -  function that searches for a value
 * in a sorted array of integers using Interpolation search algorithm
 * @array: pointer to the first element of an array
 * @size: array size
 * @value: digit to search for
 * Return: the index of the value or -1 (if array is null or no value found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	double frac;

	if (!array || size <= 0)
		return (-1);

	while (low <= high && (value >= array[low]) && (value <= array[high]))
	{
		frac = (double)(high - low) / (array[high] - array[low]);
		pos = low + (frac * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (array[pos] == value)
		return (pos);
	else
	{
		frac = (double)(high - low) / (array[high] - array[low]);
		pos = low + (frac * (value - array[low]));
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
