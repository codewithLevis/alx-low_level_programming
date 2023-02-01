#include "lists.h"
/**
*print_listint - prints all the elements of a listint_t list.
*@h: pointer to struct list
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t m = 0;
	const listint_t *ptr;

	ptr = h;

	for (; ptr != NULL; m++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (m);
}
