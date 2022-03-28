#include "main.h"
<<<<<<< HEAD

/**
 * crack_me - generates random passwords
 *
=======
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

/**
 * main - program start point
 * Return: 0 when successful
 */
int main(void)
{
	random_password();

	return (0);
}
>>>>>>> bbe9a9f18939844c4a120fdceae7dcded00c3a84
