#include "lists.h"

/**
*delete_dnodeint_at_index -  deletes the node at index
*index of a dlistint_t linked list
*@head: pointer to head of list
*@index: index of the node that should be deleted
*Return: 1 if it succeeded, -1 if it faile
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (index != 0 && temp != NULL)
	{
		temp = temp->next;
		index--;
	}
	if (index != 0)
		return (-1);
	if (temp->next == NULL)
	{
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		temp = NULL;
	}
	else
	{
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
		free(temp);
		temp = NULL;
	}
	return (1);
}