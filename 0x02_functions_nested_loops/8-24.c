#include <stdio.h>
#include "_putchar.h"

void jack_bauer(void);

/**
 * main - program start point
 *
 * Return: 0 if successful
 */
int main(void)
{
	jack_bauer();
	return (0);
}

/**
 * jack_bauer - IDK who he is and what he has to do with this
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
