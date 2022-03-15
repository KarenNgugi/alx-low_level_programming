#include <stdio.h>
#include <stdlib.h>
#include "_putchar.h"

int print_last_digit(int);

/**
 * main - entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

/**
 * print_last_digit - prints & returns the last digit of a number
 * @int: number to be checked
 *
 * Return: return the last value of a number
 */
int print_last_digit(int x)
{
	int l = abs(x) % 10;

	_putchar('0' + l);
	return (l);
}
