#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to the pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *nextnode;

	while (current != NULL)
	{
		nextnode = current->next;
		current->next = prev;
		prev = current;
		current = nextnode;
	}

	*head = prev;
	return (*head);
}
