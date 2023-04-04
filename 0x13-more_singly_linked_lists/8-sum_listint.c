#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of list.
 * @head: pointer to first list node
 *
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	for (sum = 0; temp; temp = temp->next)
		sum += temp->n;

	return (sum);
}
