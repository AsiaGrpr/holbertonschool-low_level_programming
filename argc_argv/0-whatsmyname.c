#include <stdio.h>
/**
 * main - print the name of the function
 * @argc: count of arguments
 * @argv: string with name of function
 *
 * Return: zero value
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
