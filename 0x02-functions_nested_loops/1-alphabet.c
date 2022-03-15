#include <stdio.h>
#include "_putchar.h"

void print_alphabet(void);

/**
 * main - main function
 *
 * Return: return 0 if successful
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - secondary function
 *
 * Description: prints each letter of the alphabet, ending with a newline
 */
void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(abc[i]);
	}
}
