#include "hash_tables.h"

/**
* hash_table_create - a function that creates a hash table.
*@size: size of table
*Return: table or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *table = NULL;

	if (size < 1)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	
	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	
	if (table->array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		table->array[idx] = NULL;
	table->size = size;
	return (table);
}
