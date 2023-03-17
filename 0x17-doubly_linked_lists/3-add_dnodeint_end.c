#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head of list
 * @n: element
 * Return: list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *trav, *new;
	new = malloc(sizeof(dlistint_t));

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;

	trav->next = new;
	new->prev = trav;

	return (*head);
}
