#include "lists.h"

/**
*print_listint_safe - function that prints a listint_t linked list
*@head: pointer to list
*Return: the number of nodes in the list
*This function can print lists with a loop
*You should go through the list only once
*If the function fails, exit the program with status 98
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count;

	count = 0;
	temp = head;
	while (temp != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp <= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		temp = temp->next;
	}

	return (count);
}
