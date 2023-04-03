#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: double pointer to of list
 * @n: value of new element
 *
 * Return: Address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
