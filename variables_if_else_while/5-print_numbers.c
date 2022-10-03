#include <stdio.h>
/**
 * main - print digit numbers from '0' to '10'
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	char i;

	for (i = '0' ; i < '10' ; i++)
		putchar (i);

	putchar ('\n');

	return (0);
}
