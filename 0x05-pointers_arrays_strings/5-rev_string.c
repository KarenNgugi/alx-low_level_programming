#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string (char *s)
{
	int len = strlen(s);
	char str[len];
	int i, j;

	for (i = len - 1; i >= 0; i--)
	{
		for (j = 0; j < len; j++)
		{
			str[j] = i;
		}
	}

	strcpy(s, str);
}
