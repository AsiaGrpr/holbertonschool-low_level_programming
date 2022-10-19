#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: count of arguments
 * @argv: string of name function
 *
 * Return: zero value
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
