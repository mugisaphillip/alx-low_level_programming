#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int count;

	count = 0;
	temp = h;
	while (temp)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}
	return (count);
}
