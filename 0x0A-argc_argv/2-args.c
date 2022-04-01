#include <stdio.h>

/**
 * main - print all arguments, including the first one
 * @argc: number of arguments passed to main
 * @argv: array of arguments (strings) passed to main
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
