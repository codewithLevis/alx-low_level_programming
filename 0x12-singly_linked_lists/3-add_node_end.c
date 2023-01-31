#include "lists.h"

/**
 * _strlen - find string's length
 * @s: string pointer
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: double pointer to list struct
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *holder;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);

	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}
	end->len = _strlen(str);
	end->next = NULL;

	if (*head == NULL)
		*head = end;

	else
	{
		holder = *head;
		while (holder->next)
			holder = holder->next;
		holder->next = end;
	}

	return (*head);
}
