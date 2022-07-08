#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the doubly linked list
 * @head: head node of specific doubly linked list
 * @n: value for the new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (n)
	{
		node->prev = NULL;
		node->n = n;
		node->next = NULL;
	}

	if (*head == NULL)
		*head = NULL;
	else
	{
		while (h->next)
			h = h->next;

		node->prev = h;
		h->next = node;
	}

	return (node);
	free(node);
}
