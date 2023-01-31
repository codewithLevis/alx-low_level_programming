#include "lists.h"

/**
 * free_list -  frees a list_t list
 * @head: pointer to list list_t
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *ptr;

	while (current != NULL)
	{
		ptr = current->next;
		free(current->str);
		free(current);
		current = ptr;
	}
	head = NULL;
}
