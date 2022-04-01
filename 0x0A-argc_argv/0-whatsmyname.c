#include <stdio.h>

/**
 * main - print program name followed by new line
 * @argc: number of arguments passed to main
 * @argv: array of parameters (strings) passed to main
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
