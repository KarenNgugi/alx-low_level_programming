#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: null-terminated string to write to file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int result = 1, fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (0);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (result);
}
