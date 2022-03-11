#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: return 0 if successful
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 25; i++)
	{
		putchar(abc[i]);
		putchar('\n');
	}
	return (0);
}
