#include <stdio.h>
/**
 * main - print digit numbers from '0' to '10' with putchar
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar (i);

	putchar ('\n');

	return (0);
}
