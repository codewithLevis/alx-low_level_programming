#include "lists.h"

void free_listp(listp_t **head);

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
	size_t node_count = 0;
	listp_t *ptr_head, *new_node, *add_node;

	ptr_head = NULL;

	for (; head != NULL; head = head->next)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = ptr_head;
		ptr_head = new_node;

		add_node = ptr_head;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (head == add_node->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr_head);
				return (node_count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
	}

	free_listp(&ptr_head);
	return (node_count);
}

/**
*free_listp - free linked list
*@head: pointer to a linked list
*Return: void
*/
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head)
	{
		curr = *head;

		for (; curr != NULL; curr = curr->next)
		{
			temp = curr;
			free(temp);
		}
		*head = NULL;
	}
}
