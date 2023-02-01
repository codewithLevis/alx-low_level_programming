#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list.
*@head: head to be deleted
*Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int head_data;

	if (*head == NULL)
		return (0);

	ptr = (*head)->next;
	head_data = (*head)->n;

	free(*head);
	*head = ptr;

	return (head_data);
}
