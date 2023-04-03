#include <stdio.h>
#include "lists.h"

/*
 * print_listint - prints all elements of a list
 * @listint_t: pointer to list
 * return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;
	listint_t *next = h;

	while (next)
	{
		printf("%d", next->n)
		size++;
		next = next->next;
	}
	
	return (size);
}
