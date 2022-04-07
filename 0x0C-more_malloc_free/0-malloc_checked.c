#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	malloc(b);

	if (malloc(b) == NULL)
		exit(98);
}
