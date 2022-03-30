#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	write(1, s, strlen(s));
	_putchar('\n');
}
