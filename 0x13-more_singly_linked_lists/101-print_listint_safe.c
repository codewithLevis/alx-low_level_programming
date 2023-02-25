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
	size_t nodes = looped_listint_len(head);
	size_t index = 0;

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
	}
	else
	{
		while (index < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
