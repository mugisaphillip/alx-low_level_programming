#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key you are looking for
 *
 * Return: value if key is found else NULL
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tempNode;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || (strcmp(key, "") == 0))
		return (NULL);

	index = (hash_djb2((const unsigned char *)key) % (ht->size));
	tempNode = ht->array[index];

	while (tempNode)
	{
		if (strcmp(key, tempNode->key) == 0)
		{
			return (tempNode->value);
		}
		tempNode = tempNode->next;
	}
	return (NULL);
}
