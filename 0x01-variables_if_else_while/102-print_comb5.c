#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = a; b < 10; b++)
		{
			for (c = a; c < 10; c++)
			{
				for (d = a; d < 10; d++)
				{
					if (a != c && b != d)
					{
						putchar(a % 10 + '0');
						putchar(b % 10 + '0');
						putchar(' ');
						putchar(c % 10 + '0');
						putchar(d % 10 + '0');
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
