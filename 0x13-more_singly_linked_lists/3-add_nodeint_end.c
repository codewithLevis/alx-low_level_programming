#include "lists.h"

/**
*add_nodeint_end -  adds a new node at the end of a listint_t list
*
*@head: pointer to list template to add value
*@n: interger to be added at the end of list
*
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *cross;

	new_end = (listint_t *) malloc(sizeof(listint_t));

	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		cross = *head;

		while (cross->next != NULL)
			cross = cross->next;
		cross->next = new_end;
	}

	return (new_end);
}
