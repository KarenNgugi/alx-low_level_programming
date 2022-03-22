#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * random_password - generates random password
 * Return: randomly generated integer
 */
int random_password()
{
	int password;

	srand(time(NULL));

	password = rand();

	return (password);
}
