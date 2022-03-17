#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: value to be printed
 */

void print_number(int n)
{
	putchar_many(n);
}

/**
 * putchar_many - function that prints using putchar
 * @n: value to be printed using putchar
 */
void putchar_many(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		putchar_many(n / 10);

	_putchar(n % 10 + '0');
}
