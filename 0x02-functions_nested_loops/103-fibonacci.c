#include <stdio.h>

/**
 * main - program start point
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int a = 1, b = 2, sum;

	printf("%lu\n%lu\n", a, b);

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (sum % 2 == 0)
			printf("%lu\n", sum);
	}

	return (0);
}
