#include "search_algos.h"

/**
 * exponential_search - function that searches for a value
 * in a sorted array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * or -1 If value is not present in array or if array is NULL
 * use powers of 2 as exponential ranges to search in array
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t iter, left, right, bound = 1, mid;
	char *output = "Value checked array[%ld] = [%d]\n";

	if (!array || size <= 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf(output, bound, array[bound]);
		bound *= 2;
	}

	right = bound < size - 1 ? bound : size - 1;
	left = bound / 2;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (iter = left; iter <= right; iter++)
			iter != right ? printf("%d, ", array[iter]) : printf("%d\n", array[iter]);

		mid = (right + left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
