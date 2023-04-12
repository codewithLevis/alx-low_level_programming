#include "hash_tables.h"

/**
*hash_table_get - function that retrieves a value associated with a key.
*@ht: the hash table
*@key: key to be searched
*Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp_node;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[idx];

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
			return (temp_node->value);

		temp_node = temp_node->next;
	}

	return (NULL);
}
