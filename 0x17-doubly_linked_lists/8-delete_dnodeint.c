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
 * delete_dnodeint_at_index - deletes node at given index
 * @head: head node of specific list
 * @index: position to remove node at
 * Return: 1 if successful, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int result = -1;
	dlistint_t *h = *head, *p;
	unsigned int count = 0;

	if (*head != NULL)
	{
		if (index == 0)
		{
			if (h->next)
			{
				h = h->next;
				h->prev = NULL;
				*head = h;
				result = 1;
			}
			else
			{
				*head = NULL;
				result = 1;
			}
		}

		else if (index < dlistint_len(*head))
		{
			for (count = 0; count < index; count++)
			{
				p = h;
				h = h->next;
			}
			p->next = h->next;
			if (h->next != NULL)
				h->next->prev = p;
			result = 1;
		}
	}
	return (result);
}
