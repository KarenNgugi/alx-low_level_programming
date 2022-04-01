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

	if (argc <= 1)
		res = 0;

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(isdigit(*argv[i])))
			{
				flag = 1;
			}

			res += atoi(&(*argv[i]));
		}
	}

	if (flag == 1 && res != 0)
	{
		printf("Error\n");
		return (1);
	}

	else if (flag == 1 && res == 0)
	{
		printf("%d\n", res);
		return (0);
	}

	else
	{
		printf("%d\n", res);
		return (0);
	}
}
