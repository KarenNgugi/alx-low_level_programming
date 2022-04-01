#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments passed to main
 * @argv: array of arguments (strings) passed to main
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", atoi(&(*argv[1])) * atoi(&(*argv[2])));
		return (0);
	}
}
