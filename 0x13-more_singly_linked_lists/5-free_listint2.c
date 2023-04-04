#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: double pointer to list
 *
 * Return: Always void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
