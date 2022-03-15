#include <stdio.h>
#include <ctype.h>
#include "main.h"

int _islower(int c);

/**
 * main - program entry point
 *
 * Return: 0 if successful
 */


int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - checks if value is lowercase
 * @c: value to be checked
 *
 * Return: 1 if is lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
