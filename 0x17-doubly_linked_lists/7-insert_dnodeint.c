

#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * atlist at a given position.
 * @h: A pointer to the head
 * @idx: The position
 * @n: element
 * Return: If the function fails - NULL.
 * or the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *trav = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		trav = trav->next;
		if (trav == NULL)
			return (NULL);
		 idx--;
	}

	if (trav->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = trav;
	new->next = trav->next;
	trav->next->prev = new;
	trav->next = new;

	return (new);
}
