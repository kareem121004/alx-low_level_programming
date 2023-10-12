#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n:insert the new node
 * Return: pointer to the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode;
	dlistint_t *temp;

	temp = *h;
	if (idx == 0)
		return (add_dnodeint_end(h, n));

	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		i++;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
