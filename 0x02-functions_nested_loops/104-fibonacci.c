#include <stdio.h>

/**
 * main - program start point
 *
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int a = 1, b = 2, sum, n = 0;

	printf("%lu, %lu, ", a, b);

	while (n < 98)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (n != 97)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);

		n++;
	}
	putchar('\n');
	return (0);
}
