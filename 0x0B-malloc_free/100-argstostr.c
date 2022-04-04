#include "main.h"

/**
 * argstostr - concatenates all arguments of program
 * @ac: argc a.k.a., number of arguments passed
 * @av: argv[] a.k.a., array of arguments passed
 * Return: string of concatenated values
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	else
	{
		/*
		int i;
		char *s = malloc(ac * sizeof(char));

		for (i = 0; i < ac; i++)
		{
			s[i] = &av[i] + '\n';
		}
		return (s);
		free(s);*/
	}
}

test
{
	    char *av[] = {"./a", "this", "is", "karen"};
    int ac = 4;
    int i = 0, j = 0, count = 0;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; j < strlen(av[i]); j++)
        {
            
            printf("%c", av[i][j]);
        }
        printf("\n");
    }
    
    char *z = malloc(count * sizeof(char));
}
