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

	new->n = n;
	new->prev = NULL;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
