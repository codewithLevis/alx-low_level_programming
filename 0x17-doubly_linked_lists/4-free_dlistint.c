#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
