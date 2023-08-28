#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return: the data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	int data = (*head)->n;

	temp = *head;

	*head = (*head)->next;
	free(temp);

	return (data);

}
