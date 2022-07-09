#include "lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: doubly linked list
 * Return: number of elements present
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: head node of specific dnodeint_t list
 * @idx: index to insert new node at
 * @n: value of new node
 * Return: pointer to new node, NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *head = *h, *p;
	unsigned int count = 0, llen = dlistint_len(*h);

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (*h == NULL)
		head = add_dnodeint_end(h, n);

	else
	{
		if (idx == 0)
			head = add_dnodeint(h, n);
		else if (idx == llen)
		{
			while (head->next)
				head = head->next;
			head = add_dnodeint_end(h, n);
		}
		else if (idx < llen)
		{
			for (count = 0; count < idx; count++)
			{
				p = head;
				head = head->next;
			}
			node->prev = p, node->next = head, node->n = n;
			p->next = node, head->prev = node;
			return (node);
		}
		else
			return (NULL);
	}
	return (head);
	free(node);
}
