#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int a = 1, b = 2, count = 0, sum;

	printf("%d, %d, ", a, b);

	while (count < 48)
	{
		sum = a + b;
		a = b;
		b = abs(sum);

		if (count != 47)
		{
			printf("%d, ", b);
		}
		else
		{
			printf("%d", b);
		}

		count++;
	}

	return (0);
}

