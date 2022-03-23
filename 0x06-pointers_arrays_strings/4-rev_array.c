#include "main.h"


/**
 * putchar_many - prints out number using putchar
 * @n: integer to be printed
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

/**
 * reverse_array - print array in reverse
 * @a: array of integers to reverse
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i != 0)
		{
			putchar_many(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
			putchar_many(a[i]);
	}
	_putchar('\n');
}
