#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first list item
 * @index: indox whose node is wanted
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	for (i = 0; temp; i++)
	{
		if (i == index)
			break;
		temp = temp->next;
	}
	return (temp);
}
