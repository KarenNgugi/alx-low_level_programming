#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return : 0 when successful
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 25; i++)
	{
		putchar(abc[i]);
	}
	for (int i = 0; i < 25; i++)
	{
		putchar(toupper(abc[i]));
	}
	return (0);
}

