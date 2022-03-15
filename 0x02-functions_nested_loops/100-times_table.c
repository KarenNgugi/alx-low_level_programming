#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the timetable of integer n
 * @n: number to generate the times table
 */
void print_times_table(int n)
{
	if (n >=  0 || n <= 15)
	{
		int a, b;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
					putchar(b + '0');
				else if ((a * b) < 10)
				{
					putchar(' ');
					putchar(' ');
					putchar((a * b) % 10 + '0');
				}

				else
				{
					putchar(' ');
					putchar((a * b) / 10 + '0');
					putchar((a * b) % 10 + '0');
				}
				if (b != 9)
					putchar(',');
			}
			putchar('\n');
		}
	}
}
