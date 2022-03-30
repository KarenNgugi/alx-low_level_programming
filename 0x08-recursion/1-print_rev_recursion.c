#include "main.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int n = strlen(s) - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
