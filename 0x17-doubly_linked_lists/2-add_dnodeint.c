#include "lists.h"

/**
 * add_dnodeint - add node in front of list
 * @head: head of list
 * @n: element
 * Return: list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
