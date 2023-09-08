#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if succeeded else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp_node;
	unsigned long int index;

	if (ht == NULL)
		return (0);

	index = (hash_djb2((const unsigned char *)key) % (ht->size));
	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (0);

	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		ht->array[index] = new_node;
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		return (1);
	}

	temp_node = ht->array[index];
	while (temp_node)
	{
		if (strcmp(key, temp_node->key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}
	temp_node = ht->array[index];
	while (temp_node)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = temp_node;
		return (1);
	}
	return (0);
}
