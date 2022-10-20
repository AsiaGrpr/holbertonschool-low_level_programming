#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - add positive numbers
 *@argc: number of the argument
 *@argv: string of command line
 *
 *Return: 0 if it works or 1 if error
 */

int main(int argc, char *argv[])
{

	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
