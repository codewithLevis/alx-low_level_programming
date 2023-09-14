#include "ssearch_algos.h"

/**
 * jump_list -  function that searches for a value in a sorted list of integers
 * uses jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value:  the value to search for
 * Return: a pointer to the first node where value is located or NULL
 * If value is not present in head or if head is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list;
	listint_t *left = NULL;
	size_t right = 0;
	size_t jump = sqrt(size);
	size_t min = 0;

	if (!list || size <= 0)
		return (-1);

	puts("List :");
	while (right < size && (*tmp).n < value)
	{
		printf("Index[%ld] = [%d]\n", right, (*tmp).n);
		left = tmp;
		right = jump + (*tmp).index;

		while (right < (*tmp).index && tmp != NULL)
		{
			tmp = tmp->next;
		}
	}
}
