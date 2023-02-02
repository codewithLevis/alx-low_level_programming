#include "lists.h"

/**
*insert_nodeint_at_index -  inserts a new node at a given position
*@head: pointer to a list template
*@idx: is the index of the list where the new node should be added
*@n: integer to be added at a given position
*Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *nth_position;

	nth_position = (listint_t *) malloc(sizeof(listint_t));

	if (nth_position == NULL)
		return (NULL);

	(*nth_position).n = n;
	(*nth_position).next = NULL;

	if (idx == 0)
	{
		nth_position->next = (*head);
		*head = nth_position;
		return (nth_position);
	}

	ptr = *head;

	for (i = 0; i < (idx - 1) && ptr != NULL; i++, ptr = ptr->next)
	{
		if (ptr->next == NULL)
		{
			free(nth_position);
			return (NULL);
		}
	}

	(*nth_position).next = ptr->next;
	ptr->next = nth_position;

	return (nth_position);
}
