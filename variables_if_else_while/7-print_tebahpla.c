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

	for (i = 'z' ; i <= 'a' ; i++)
		putchar (i);

	putchar ('\n');

	return (0);
}
