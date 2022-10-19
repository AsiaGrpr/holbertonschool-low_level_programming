#include <stdlib.h>
#include <stdio.h>
/**
 *main - multiply 2 numbers
 *@argc: number of the argument
 *@argv: string of command line
 *
 *Return: 0 if it works or 1 if error
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
