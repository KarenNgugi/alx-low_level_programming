#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: bit to set
 * @index: position to set bit, starting from 0
 * Return: 1 if successful, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int result;

	if(index < 0)
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
