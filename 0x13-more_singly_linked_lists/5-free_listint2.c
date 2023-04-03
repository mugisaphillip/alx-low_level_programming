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

	for (current = *head; current; current = next)
	{
		next = current->next;
		free(current);
	}
}
