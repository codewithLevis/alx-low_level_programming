#include "lists.h"

/**
*add_nodeint -  adds a new node at the beginning of a listint_t list
*@head: pointer to template of list
*@n: interger
*Return:  adds a new node at the beginning of a listint_t list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_beginnig;

new_beginnig = (listint_t *) malloc(sizeof(listint_t));

if (new_beginnig == NULL)
return (NULL);
new_beginnig->n = n;

if (head == NULL)
new_beginnig->next = NULL;
else
new_beginnig->next = *head;

*head = new_beginnig;

return (new_beginnig);

}
