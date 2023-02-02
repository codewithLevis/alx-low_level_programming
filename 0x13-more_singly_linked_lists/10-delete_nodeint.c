#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index of a listint_t linked list
*
*@head: pointer to the beginning of a list
*@index: is the index of the node that should be deleted
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *search_index, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		search_index = *head;
		*head = (*head)->next;
		free(search_index);
	}

	else
	{
		search_index = *head;

		for (i = 0; i < index; i++, search_index = search_index->next)
		{
			temp = search_index;

			if (search_index->next == NULL)
				return (-1);
		}

		temp->next = search_index->next;
		free(search_index);
	}
	return (1);
}
