#include "lists.h"

/**
 * add_nodeint - add node to beginning of linked list
 * @head: position to add
 * @n: value to add
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;

	node->next = *head;
	*head = node;

	return (node);
	free(node);
}
