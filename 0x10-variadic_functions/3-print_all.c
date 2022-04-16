#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: constant pointer to string
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s, *conditions = "cifs";
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				i++;
				continue;
				break;
		}
		if ((i != strlen(format) - 1) && (conditions[i]))
			printf(", ");
		i++;
	}
	putchar('\n');
	va_end(args);
}
