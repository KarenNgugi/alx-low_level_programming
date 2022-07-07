#include "main.h"

/**
 * binarize - convert number to binary
 * @n: number to convert
 * Return: nothing
 */
void binarize(unsigned long int n)
{
	long int num = n, count = 0, j;
	char *digit, *res;

    /* number of digits the number will have */
	while (num > 0)
	{
		count += 1;
		num >>= 1;
	}

	res = malloc(count * sizeof(char));
	if (res == NULL)
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
		putchar(res[j]);
		j--;
	}

	free(res);
}

/**
 * print_binary - print number in binary
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		binarize(n);
	}
}
