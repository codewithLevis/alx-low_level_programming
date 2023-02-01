#include "lists.h"

/**
 * list_len -  function returns the number of elements in a linked list_t list.
 * @h: pointer to the linked list list_t
 *
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;
	const list_t *current = h;

	for (; current != NULL; m++)
		current = current->next;

	return (m);
}
