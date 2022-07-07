#include "main.h"

/**
 * dec_to_bin - converts decimal number to binary
 * @n: number to convert
 * Return: binary representation of n
 */

char *dec_to_bin(long int n)
{
	long int num = n, count = 0, i = 0, j;
	char *digit, *res, *result;

	while (num > 0)
	{
		count += 1;
		num >>= 1;
	}

	res = malloc(count * sizeof(char));
	if (res == NULL)
		free(res);

	result = malloc(count * sizeof(char));
	if (result == NULL)
		free(res);

	while (n > 0)
	{
		digit = ((n & 1) == 0 ? "0" : "1");
		res = strcat(res, digit);
		n >>= 1;
	}

	j = count - 1;
	while (j >= 0)
	{
		result[i] = res[j];
		i++;
		j--;
	}
	return (result);

	free(result);
	free(res);
}

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
