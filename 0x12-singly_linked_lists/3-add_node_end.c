#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	if (str == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}
