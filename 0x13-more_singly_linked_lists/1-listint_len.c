#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: linked list of type struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
