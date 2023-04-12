#include "hash_tables.h"

/**
 * shash_table_create - creates the hash table
 * @size: size of table
 * Return: hash table (otherwise) NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int idx;
	shash_table_t *ht = NULL;

	if (size < 1)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));

	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(shash_table_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
		ht->array[idx] = NULL;
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * new_node_t - creates shash_node_t
 * @key: key
 * @value: value of key
 * Return: shash_node_t
*/
shash_node_t *new_node_t(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}

/**
 * set_ord_list - orders the list
 * @ht: hash table
 * @key: index gene-key
 * @new_node: node
*/

void set_ord_list(shash_table_t *ht, shash_node_t *new_node, const char *key)
{
	shash_node_t *temp_node;

	if (!(ht->shead))
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp_node = ht->shead;
		while (temp_node->snext != NULL && strcmp(key, temp_node->snext->key) > 0)
			temp_node = temp_node->snext;

		new_node->snext = temp_node->snext;
		if (temp_node->snext != NULL)
			temp_node->snext->sprev = new_node;
		else
			ht->stail = new_node;
		new_node->sprev = temp_node;
		temp_node->snext = new_node;
	}
}
/**
 * shash_table_set - set new element in the table
 * @key: string
 * @value: value of key
 * @ht: hash table
 * Return: 1 or 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp, *new;
	unsigned long int idx;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = new_node_t(key, value);

	if (new == NULL)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	set_ord_list(ht, new, key);
	return (1);
}

/**
*shash_table_get - a function to search for an element in the hash table
*@ht: hash table
*@key: the key to search for
*Return: the value associated with the element,
*or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);
	node = ht->shead;

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - print the hash table
 * uses the sorted linked list
 * @ht: table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table in reverse
 * traverses sorted linked list in reverse order
 * @ht: table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes table
 * @ht: table
 *Frees every member of the table before freeing the table
 *its self
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *ptr;

	if (!ht)
		return;

	node = ht->shead;
	while (node)
	{
		ptr = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = ptr;
	}

	free(ht->array);
	free(ht);
}
