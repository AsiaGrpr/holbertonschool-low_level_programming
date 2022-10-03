#include <stdio.h>
/**
 * main - print the lowercase alphabet
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar (i);

	for (i = 'A' ; i <= 'Z' ; i++)
		putchar (i);

	putchar ('\n');

	return (0);
}
