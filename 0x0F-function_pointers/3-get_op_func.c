#include "3-calc.h"

/**
 * get_op_func - selects correct function to perform based on user input
 * @s: operator passed as argument
 * Return: pointer to relevant function in 3-op_functions.c based on s
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
}
