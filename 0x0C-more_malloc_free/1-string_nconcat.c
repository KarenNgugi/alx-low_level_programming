#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, i;
	char *s;

	s1_len = strlen(s1);

	s = malloc(s1_len * sizeof(*s));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];

	for (i = 0; i < n && s2[i] != '\0'; i++)
		s[s1_len + i] = s2[i];

	return (s);
	free(s);
}
