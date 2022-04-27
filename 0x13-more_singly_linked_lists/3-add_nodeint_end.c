#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 * @head: node to append to
 * @n: value to add to node
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *curr = malloc(sizeof(listint_t));

	if (node == NULL || curr == NULL)
	{
		free(curr);
		free(node);
		return (NULL);
	}

	node->n = n;

	if (*head == NULL)
		*head = node;

	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = node;
	}

	return (curr);
	free(curr);
	free(node);
}
