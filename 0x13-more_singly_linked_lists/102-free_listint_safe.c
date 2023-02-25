#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 *This function can free lists with a loop
 *You should go though the list only once
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *temp_node;

	if (!h || !*h)
	{
		return 0;
	}

	while (*head_ptr)
	{
		diff = *h - (*hr)->next;
		if (diff > 0)
		{
			temp_node = (*h)->next;
			*hr = temp_node;
			count++;
		}
		else
		{
			*hr = NULL;
			count++;
			break;
		}
	}

	return (count);
}
