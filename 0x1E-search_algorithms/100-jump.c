#include "search_algos.h"

size_t minimum(size_t num1, size_t num2);

/**
 * jump_search -  a function that searches for
 * a value in a sorted array of integers using Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return:  the first index where value is located
 * If value is not present in array or if array is NULL, return == -1
 * array will be sorted in ascending order
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right = 0, jump = sqrt(size);
	size_t min = 0;

	if (!array || size <= 0)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jump;

		if (right >= size)
		{
			/*right = size - 1;*/
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	min = minimum(right, size - 1);

	for (; left <= min; left++)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);

		if (array[left] == value)
			return (left);
	}

	return (-1);
}


/**
 * minimum - checks the minimum value
 * @num1: first number
 * @num2: second number
 * Return: minimum number
 */
size_t minimum(size_t num1, size_t num2)
{
	return (num1 < num2 ? num1 : num2);
}
