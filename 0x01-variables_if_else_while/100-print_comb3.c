#include <stdio.h>
#include <ctype.h>

/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i != j) {
                putchar(i % 10 + '0');
                putchar(j % 10 + '0');

                if (i == 8) {
                    if (j == i + 1) {
                        continue;
                    }
                }
                putchar(',');
			putchar(' ');
		    }
	}
	return (0);
}
