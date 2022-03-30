#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number to find the square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);

	else if (n == (int)sqrt(n) * (int)sqrt(n))
		return (sqrt(n));

	else
	return (-1);
}
