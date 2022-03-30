#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: base number
 * @y: power
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x * y);

	else
		return (x * _pow_recursion(x, y - 1));
}
