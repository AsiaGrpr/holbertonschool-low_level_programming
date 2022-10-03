#include <stdio.h>
/**
 * main - print the lowercase numbers of base 16
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	char i;

	for (i = 0 ; i <= 9 ; i++)
		putchar (i);

	for (i = 'a' ; i <= 'f' ; i++)
		putchar (i);

	putchar ('\n');

	return (0);
}
