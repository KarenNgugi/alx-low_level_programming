#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, result, n1 = n2 = atoi(argv[1]), n2 = atoi(argv[3]);
	char o = argv[2][0];

	/* correct number of arguments check */
	if (argc != 4)
	{
		printf("Error!\n");
		exit(98);
	}

	/* correct operator check */
	if (o != '+' && o != '-' && o != '*' && o != '/' && o != '%')
	{
		printf("Error!\n");
		exit(99);
	}

	/* division by zero check */
	if ((n2 == 0 && o == '/') || (n2 == 0 && o == '%'))
	{
		printf("Error!\n");
		exit(100);
	}


	result = get_op_func(o)(n1, n2);

	return (0);
}
