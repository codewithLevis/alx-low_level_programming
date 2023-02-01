#include "lists.h"

/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: pointer to tempelate of linked list
*Return: the number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t m = 0;
	const listint_t *ptr = h;

	for (; ptr != NULL; m++)
		ptr = ptr->next;

	return (m);
}
