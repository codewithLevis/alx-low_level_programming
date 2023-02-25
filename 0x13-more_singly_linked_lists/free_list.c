#include "lists.h"

/**
 * loop_listint_l - determines how many distinct nodes 
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
