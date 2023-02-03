#include "lists.h"

/**
*find_listint_loop - finds the loop in a linked list
*@head: pointer to alist
*Return: address of the node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search, *locate;

	if (head == NULL || head->next == NULL)
		return (NULL);

	locate = head->next;
	search = (head->next)->next;

	for (; search != NULL; search = (search->next)->next;)
	{
		if (locate == search)
		{
			locate = head;

			while (locate != search)
			{
				locate = locate->next;
				search = search->next;
			}

			return (locate);
		}

		locate = locate->next;
	}

	return (NULL);
}
