#include <stdio.h>
#include "_putchar.h"

void print_alphabet_x10(void);

/**
 * main - program entry point
 *
 * Return: 0 when successful
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i, n = 0;

	while (n < 10)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(abc[i]);
		}
		_putchar('\n');
		n++;
	}
}
