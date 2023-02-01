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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to struct list_t list
 * @str: pointer to string to be added at the beginning of list
 * Return: list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *data;


	data = malloc(sizeof(list_t));
	if (data == NULL)
		return (NULL);

	data->str = strdup(str);

	if (data->str == NULL)
	{
		free(data);
		return (NULL);
	}
	data->len = _strlen(str);


	if (head == NULL)
		data->next = NULL;
	else
		data->next = *head;

	*head = data;

	return (data);
}
