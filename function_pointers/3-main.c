#include "3-calc.h"

/**
 * main - function which use command input to output result operations
 * @argc: number of command arguments
 * @argv: command arguments
 *
 * Return: result or NULL
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	result = (get_op_func(operator))(num1, num2);
	printf("%d\n", result);

	return (0);
}
