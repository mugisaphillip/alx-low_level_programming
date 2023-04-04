#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: double pointer to list
 * @index: index at which to insert new node
 *
 * Return: 1 for success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *to_delete;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	for (i = 0, temp = *head; temp; i++, temp = temp->next)
	{
		if (i + 1 == index)
		{
			to_delete = temp->next;
			temp->next = to_delete->next;
			free(to_delete);
			return (1);
		}
	}

	return (1);
}
