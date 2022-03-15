#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _abs(int);

/**
 * main - program entry point
 *
 * Return: 0 if successful
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

/**
 * _abs - returns absolute value of the number input
 * @int: number to be absoluted
 *
 * Return: returns absolute value
 */
int _abs(int x)
{
	return (abs(x));
}
