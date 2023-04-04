#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to list head
 *
 * Return: list head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous, *next;

	current = *head;
	previous = NULL;
	while (current)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return (*head);
}
