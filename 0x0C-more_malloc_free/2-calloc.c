#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: size (in bytes) of each array element
 * Return: pointer to newly created array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	return (calloc(nmemb, size));
}
