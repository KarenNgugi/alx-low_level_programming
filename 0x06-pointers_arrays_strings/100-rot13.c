#include "main.h"

/**
 * rot13 - rotates the letters in a string by 13
 * @c: string to apply the rotation to
 * Return: encoded string
 */

char *rot13(char *c)
{
	unsigned int i = 0;

	while (i < strlen(c))
	{
		if (c[i] >= 65 && c[i] <= 90)
			c[i] = ((c[i] - 65 + 13) % 26) + 65;
		else if (c[i] >= 97 && c[i] <= 122)
			c[i] = ((c[i] - 97 + 13) % 26) + 97;
	}
	i++;

	return (c);
}
