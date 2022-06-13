#include "lists.h"

/**
 * add_dnodeint_end - add node to doubly linked list at the end
 * @head: head node of specific doubly linked list
 * @n: value to pass to new node
 * Return: address of new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;
	dlistint_t *c = malloc(sizeof(dlistint_t));

	if (node == NULL || c == NULL)
	{
		free(c);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	node->n = n;
	if (*head != NULL)
	{
		while (h->next)
		{
			c = h;
			h = h->next;
		}

	}
}
