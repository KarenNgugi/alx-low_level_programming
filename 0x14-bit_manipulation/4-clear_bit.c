#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at a given index
 * @n: bit to clear
 * @index: position
 * Return: 1 if successful, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int result;

	if (index < 0)
	{
		result = -1;
		return (result);
	}

	else
	{
		result = 1;
		return (result);
	}
}
