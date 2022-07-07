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
 * get_bit - returns value of a bit at a given index
 * @n: bit you want to get
 * @index: index starting from 0
 * Return: value of bit at index index or -1 in case of an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, j = 0, answer;
	char *binary = dec_to_bin(n);
	char *reverse_binary = malloc(strlen(binary) * sizeof(char));

	if (reverse_binary == NULL)
		free(reverse_binary);

	i = strlen(binary) - 1;

	while (i >= 0)
	{
		reverse_binary[j] = binary[i];
		i--;
		j++;
	}


	answer = reverse_binary[index] - '0';
	return (answer);

	if ((answer != 0) || (answer != 1))
		return (1);
	else
		return (answer);
}
