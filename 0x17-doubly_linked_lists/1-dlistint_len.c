#include "lists.h"

/**
 * dlistint_len - finds list len
 * @h: head of list
 * Return: node count
*/
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *trav = (dlistint_t *) h;
	size_t i = 0;

	for (; trav != NULL; i++)
		trav = trav->next;                

	return (i);
}
