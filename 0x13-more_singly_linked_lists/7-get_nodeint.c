#include "lists.h"

/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: pointer to tempelate of linked list
*Return: the number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
	size_t m = 0;
	const listint_t *ptr = h;

	for (; ptr != NULL; m++)
		ptr = ptr->next;

	return (m);
}

/**
*get_nodeint_at_index - gets nth node of a listint_t linked list
*
*@head: list
*@index: node to be returned
*
*Return: the nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        listint_t *ptr, *nth_node;
        unsigned int m, len = listint_len(head);

        nth_node = (listint_t *) malloc(sizeof(listint_t));

        if (nth_node == NULL)
                return (NULL);

        if (index > len)
                return (NULL);

        ptr = head;

        for (m = 0; ptr != NULL && m < index - 1; m++)
        {
                        ptr = ptr->next;
	}
        nth_node = ptr->next;

        return (nth_node);
}
