#include "main.h"

/**
 * rot13 - rotates the letters in a string by 13
 * @c: string to apply the rotation to
 * Return: encoded string
 */

char *rot13(char *c)
{
	char l1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	unsigned int i, j;

	for (i = 0; i < strlen(c); i++)
	{
		for (j = 0; j < strlen(l1); j++)
		{
			if (c[i] == l1[j])
				c[i] = l2[j];
		}
	}
	return (c);
}
