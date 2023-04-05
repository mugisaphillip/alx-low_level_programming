#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}

}
