#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers & prints the result
 * @argc: number of arguments passed to main
 * @argv: array of arguments (strings) passed to main
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, res = 0, flag = 0;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
			res += atoi(&(*argv[i]));

		else
			flag = 1;
	}

	if (flag == 1)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", res);
		return (0);
	}
}
