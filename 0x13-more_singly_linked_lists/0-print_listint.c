#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to start of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size;
	const listint_t *next;

	next = h;
	for (size = 0; next; size++)
	{
		printf("%d\n", next->n);
		next = next->next;
	}
	return (size);
}
