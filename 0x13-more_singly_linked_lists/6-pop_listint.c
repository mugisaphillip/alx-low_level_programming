#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: the head node’s data n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	free(*head);
	head = &temp;
	return (temp->n);
}
