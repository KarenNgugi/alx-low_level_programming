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
	int k = n / 10;

	if (k < 0)
	{
		_putchar('-');
		k = -k;
	}

	if (k / 10)
		putchar_many(k / 10);

	_putchar(k % 10 + '0');
	
	_putchar(n % 10 + '0');
}
