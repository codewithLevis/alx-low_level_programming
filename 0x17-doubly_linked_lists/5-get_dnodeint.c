#include "lists.h"

/**
*get_dnodeint_at_index - returns nth node of list.
*@head: Pointer to start of list
*@index: is the index of the node starting from 0
*Return: if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	size_t i = 0;

	for (; i != index && ptr != NULL; i++)
	{
		ptr = ptr->next;

		if (ptr == NULL)
			return (NULL);
	}

	return (ptr);
}
