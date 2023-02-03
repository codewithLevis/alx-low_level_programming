#include "list.h"

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
	const listint_t *search = NULL, *move = NULL;
	size_t counter = 0, check;

	search = head;
	for (;search; counter++)
	{
		printf("[%p] %d\n", (void *)search, search->n);

		search = search->next;
		move = head;

		for  (check = 0 ;check < counter; check++)
		{
			if (search == move)
			{
				printf("-> [%p] %d\n", (void *)search, search->n);
				return (counter);
			}

			move = move->next;
		}

		if (head == NULL)
			exit(98);
	}
	return (counter);
}

