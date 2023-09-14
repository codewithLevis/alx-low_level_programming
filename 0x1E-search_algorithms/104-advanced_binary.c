#include "search_algos.h"
void print_range(int *, size_t, size_t);
int real_binary_search(int *, size_t, size_t, int);
/**
 * advanced_binary - a search to return the leftmost index for value
 * uses binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: -1 or 1
 * array will be sorted in ascending order
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size <= 0)
		return (-1);
	return (real_binary_search(array, 0, size - 1, value));
}

/**
 * real_binary_search - a search to return the leftmost index for value
 * uses binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @low: start vof range
 * @high: end of range
 * @value:  the value to search for
 * Return: -1 or 1
 * array will be sorted in ascending order
 */
int real_binary_search(int *array, size_t low, size_t high, int value)
{
	int result = -1, tmp;
	size_t mid = (low + high) / 2;

	if (low >= high)
	{
		if (array[mid] == value)
		{
			return (mid);
		}
		return (-1);
	}

	print_range(array, low, high);

	if (array[mid] < value)
		return (real_binary_search(array, mid + 1, high, value));
	else if (array[mid] > value)
		return (real_binary_search(array, low, mid - 1, value));

	result = mid;
	tmp = real_binary_search(array, low, mid, value);

	if (tmp != -1 && tmp < result)
		return (tmp);
	return (result);
}


/**
 * print_range - outputs the portion being searched
 * @array: pointer to the first element of the array
 * @low: lowest part of the range
 * @high: ending of the range
 */
void print_range(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low <= high)
	{
		low == high ? printf("%d\n", array[low]) : printf("%d, ", array[low]);
		low++;
	}
}
