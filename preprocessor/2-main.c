#include <stdio.h>

/**
 * main - function that print name source file
 *@void: void
 * Return: NULL value
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
