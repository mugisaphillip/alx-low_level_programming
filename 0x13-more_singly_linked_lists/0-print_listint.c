#include <stdio.h>
#include "lists.h"

/*
 * print_listint - prints all elements of a list
 * @listint_t: pointer to list
 * return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size;
	const listint_t *next;

	next = h;

	for (size = 0; next; size++)
	{
		printf("%d\n", next->n)
		next = next->next;
	}
	
	return (size);
}
