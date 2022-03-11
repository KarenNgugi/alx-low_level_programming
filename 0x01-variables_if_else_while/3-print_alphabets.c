#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Return: 0 when successful
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abc[i]);
	}
	for (i = 0; i < 25; i++)
	{
		putchar(toupper(abc[i]));
	}
	return (0);
}

