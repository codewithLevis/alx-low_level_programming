

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
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    if (h == NULL)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;

    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;

        if (*h != NULL)
            (*h)->prev = new_node;

        *h = new_node;
        return (new_node);
    }

    while (i < idx - 1)
    {
        if (temp == NULL)
        {
            free(new_node);
            return (NULL);
        }
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->prev = temp;
    new_node->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = new_node;

    temp->next = new_node;

    return (new_node);
}
