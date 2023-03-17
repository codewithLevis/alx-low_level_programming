#include "lists.h"

/**
*sum_dlistint - finds the sum of all the data in list
*@head: pointer to list
*Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}
