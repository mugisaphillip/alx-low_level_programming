#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to first list element
 * @idx: index to insert new node
 * @n: value of new node
 *
 * Return: Created Node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (!head || !*head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		head = &new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; temp; i++)
	{
		if (i + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			break;
		}
		temp = temp->next;
	}

	return (new_node);
}
