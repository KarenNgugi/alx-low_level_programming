#include <stdio.h>

/**
 * main - print number of arguments passed to main
 * @argc: number of arguments passed to main
 * @argv: array of parameters (strings) passed to main
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
