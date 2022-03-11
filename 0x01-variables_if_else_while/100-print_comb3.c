#include <stdio.h>
#include <ctype.h>

/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			else
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
