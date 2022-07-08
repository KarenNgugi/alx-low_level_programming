#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of the doubly linked list
 * @head: head node of specific doubly linked list
 * @n: value for the new node
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}


	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}

	else
	{
		while (h->next)
		{
			p = h;
			h = h->next;
			h->prev = p;
		}

		node->prev = p;
		h->next = node;
	}

	return (node);
	free(node);
}
