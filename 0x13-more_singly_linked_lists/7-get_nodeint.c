#include "lists.h"

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
listint_t *nth_node;
unsigned int m;

nth_node = head;
for (m = 0; nth_node != NULL; m++)
{
if (m == index)
return (nth_node);
nth_node = nth_node->next;
}

return (nth_node);
}
