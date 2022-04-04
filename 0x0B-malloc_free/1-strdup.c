#include "main.h"

/**
 * _strdup - return pointer to new memory with copied string
 * @str: string to copy
 * Return: pointer
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	else
		return (strdup(str));
}
