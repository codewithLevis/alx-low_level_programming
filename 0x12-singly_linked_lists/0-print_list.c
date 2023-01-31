#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to linked list list_t 
 *
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;
	const list_t *current = h;

	for (;current != NULL; m++)
	{
		printf("[%d] %s\n", current->str != NULL? current->len : 0,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
	}
	return (m);
}
