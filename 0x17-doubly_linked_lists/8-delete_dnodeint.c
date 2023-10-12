#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a linked list
 * @head: A pointer to a pointer to the head node of the list
 * @index: The index of the node to delete
 * Return: 1 if successful, or -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp->prev != NULL)

		temp->prev->next = temp->next;
	else
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
}
