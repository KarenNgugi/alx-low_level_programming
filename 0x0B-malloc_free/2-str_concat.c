#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	else
	{
		unsigned int i, len = strlen(s1) + strlen(s2) + 1;
		char *s = malloc(len * sizeof(char));

		for (i = 0; i < strlen(s1); i++)
			s[i] = s1[i];

		for (i = 0; i < strlen(s2); i++)
			s[strlen(s1) + i] = s2[i];

		s[len] = '\0';

		return (s);
		free(s);
	}
}
