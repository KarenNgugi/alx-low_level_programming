#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, n2 = atoi(argv[3]);
	char o = argv[2][0];



	if (argc != 4)
	{
		printf("Error!\n");
		exit(98);
	}


	if (o != '+' && o != '-' && o != '*' && o != '/' && o != '%')
	{
		printf("Error!\n");
		exit(99);
	}

	
	if ((n2 == 0 && o == '/') || (n2 == 0 && o == '%'))
	{
		printf("Error!\n");
		exit(100);
	}	

	printf("Number of arguments passed: %d\n", argc);
	printf("Printing arguments now:\n");
	for (i = 0; i < argc; i++)
	{
		printf("Index [%d] = %s\n", i, argv[i]);
	}
	return (0);
}
