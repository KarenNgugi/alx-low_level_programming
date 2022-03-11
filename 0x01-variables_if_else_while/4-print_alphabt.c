#include <stdio.h>
extern int* putchar ();
/**
 * main - entry point
 * Return : 0 when successful
 */
int main(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
	{
		if (abc[i] != 'e' && abc[i] != 'q')
			putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
