#inlude "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: pointer to start of lisr
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *temp;

	count = 0;
	temp = h
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
