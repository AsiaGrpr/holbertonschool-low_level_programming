#include <stdio.h>
/**
 * main - print all digit numbers separated by a space ans coma
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar ('\n');

	return (0);
}
