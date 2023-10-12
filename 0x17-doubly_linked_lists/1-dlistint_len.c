#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked lists
 * @h: linked list
 * Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count)
}
