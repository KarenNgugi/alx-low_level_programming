#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int count = 0;
	unsigned int a = 1, b = 2, sum;

	printf("%u, %u, ", a, b);

	while (count < 48)
	{
		sum = a + b;
		a = b;
		b = abs(sum);

		if (count != 47)
		{
			printf("%u, ", b);
		}
		else
		{
			printf("%u", b);
		}

		count++;
	}
	putchar('\n');
	return (0);
}

