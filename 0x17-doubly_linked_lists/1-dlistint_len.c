#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
