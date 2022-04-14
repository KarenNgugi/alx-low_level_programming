#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of parameters passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);

		if (separator == NULL)
			separator = "";

		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d\n", va_arg(args, int));
			else
				printf("%d%s", va_arg(args, int), separator);
		}

		va_end(args);
	}
}
