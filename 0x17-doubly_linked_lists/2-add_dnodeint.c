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

	if (new == NULL)
		return (NULL);
	new->n = n;

	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->prev = NULL;
	new->next = (*head);
	(*head)->prev = new;
	(*head) = new;

	return (*head);
}
