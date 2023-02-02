#include "lists.h"

/**
*sum_listint - generates sum of numbers in a list
*@head: list
*Return: sum
*/

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *ptr;

	ptr = head;

	for (; ptr != NULL; ptr = ptr->next)
		total += ptr->n;

	return (total);
}
