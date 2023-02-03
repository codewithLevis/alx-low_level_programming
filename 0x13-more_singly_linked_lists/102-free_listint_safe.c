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
	size_t counter = 0;
	int diff;

	listint_t *search;

	if (h == NULL || *h == NULL)
		return (NULL);

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			search = (*h)->next;
			free(*h);
			*h = search;
			counter++;
		}
		else
		{
			free(*h);
			*h = NULL;
			counter++;
			break;
		}
	}
	*h = NULL;

	return (counter);
}
