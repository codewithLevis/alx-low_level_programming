#include "search_algos.h"

/**
 * linear_skip - function that searches for a value
 * in a sorted skip list of integers.
 * @list:  a pointer to the head of the skip list to search in
 * @value: he value to search for
 * A node of the express lane is placed every index
 * which is a multiple of the square root of the size of the list
 * list will be sorted in ascending order
 * Return: pointer on the first node where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (!list)
		return (NULL);
}
