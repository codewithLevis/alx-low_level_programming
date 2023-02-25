#include "lists.h"

/**
* looped_listint_len - determines how many distinct nodes 
* there are in a looped listint_t linked list.
* @head: listint_t pointer
* Return: If not, the number of distinct nodes in the list
*/

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	for (; hare; hare = (hare->next)->next, tortoise = tortoise->next)
	{
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
			}

			return (count);
		}
	}

	return (0);
}

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
