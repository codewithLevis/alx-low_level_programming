#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: Hash table to add element to
 * @key: Key of the element
 * @value: Value of the element
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *value_dup;
	hash_node_t *new, *temp;

	if (!ht || !key|| strlen(key) == 0 || !value)
		return (0);

	value_dup = strdup(value);

	if (value_dup == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		free(value_dup);
		return (0);
	}

	new->key = strdup(key);

	if (new->key == NULL)
	{
		free(value_dup);
		free(new);
		return (0);
	}

	new->value = value_dup;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
