#include "lists.h"

/**
 * print_dlistint - prints list
 * @h: head of list
 * Return: node
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *trav = (dlistint_t *) h;
	size_t i = 0;

	for (; trav != NULL; i++)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
	}

	return (i);
}
