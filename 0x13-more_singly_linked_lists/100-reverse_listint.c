#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *nextnode;

	prev = NULL;
	current = nexnode = *head;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		current->next = prev;
		prev = current;
		current = nextnode;
	}

	*head = prev;
	return (*head);
}
