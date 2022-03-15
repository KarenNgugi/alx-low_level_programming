#include <ctype.h>
#include "_putchar.h"

int _isalpha(int c);

/**
 * main - program entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _isalpha - checks if value is alphabetic
 * @c:  input value
 *
 * Return: 1 if c is a letter, otherwise return 0
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
