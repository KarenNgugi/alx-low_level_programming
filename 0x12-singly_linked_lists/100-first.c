#include <stdio.h>
#include "100-main.c"
/**
 * print_before_main - run before the main function
 * Return: nothing
 */

void print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	main();
}
