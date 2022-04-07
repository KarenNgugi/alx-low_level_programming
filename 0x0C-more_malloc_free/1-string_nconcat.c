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
	char *s;
	unsigned int i, s1_len = strlen(s1), total_len = s1_len + n + 1;

	if (n >= strlen(s2))
		n = strlen(s2);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s = malloc(total_len * sizeof(*s));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[s1_len + i] = s2[i];

	s[total_len] = '\0';

	return (s);
	free(s);
}
