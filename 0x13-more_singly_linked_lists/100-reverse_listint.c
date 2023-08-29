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
	listint_t *nextnode = NULL;

	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextnode;
	}
	*head = prev;
	return (*head);
}
