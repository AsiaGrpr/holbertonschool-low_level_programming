#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 *	to perform the operation asked by the user
 * @s: operator argument in the command
 *
 * Return: pointer to function of operation or NULL value
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
