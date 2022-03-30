#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	unsigned int n = strlen(s), i;

	for (i = 0; i < n; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
