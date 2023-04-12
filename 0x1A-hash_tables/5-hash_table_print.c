#include "hash_tables.h"

/**
*hash_table_print - function that prints a hash table
*@ht: the hash table
*Return: void
*Order: array, list {'key': 'value'}
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
			}
			else
			{
				printf(", '%s': '%s'", node->key, node->value);
			}
			node = node->next;
		}
	}
	printf("}\n");
}
