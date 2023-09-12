#include "search_algos.h"

void print_search_range(int *arr, int low, int high);

/**
 * binary_search - searches for a value in a sorted array of integers
 * utilizes binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 * array will be sorted in ascending order
 * value won’t appear more than once in array
 * If value is not present in array or if array is NULL return == -1
 */

int binary_search(int *array, size_t size, int value)
{
	int high = ((int) size - 1), low = 0, mid = 0;

	if (!array || size <= 0)
		return (-1);

	while (low <= high)
	{
		mid = (high + low) / 2;

		print_search_range(array, low, high);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_search_range - prints array based on location of high and low
 * @arr: pointer to first element of an arry
 * @low: current lowest position of the algorithm
 * @high: current highest position of the algorithm
 */

void print_search_range(int *arr, int low, int high)
{
	printf("Searching in array: ");

	for (; low <= high; low++)
	{
		if (low < high)
			printf("%d, ", arr[low]);
		else
			printf("%d",  arr[low]);
	}
	puts("");
}
