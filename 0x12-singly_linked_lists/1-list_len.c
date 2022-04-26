#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: linked list of type struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
