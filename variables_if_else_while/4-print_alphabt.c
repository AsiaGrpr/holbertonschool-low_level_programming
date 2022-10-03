#include <stdio.h>
/**
 * main - print the lowercase alphabet except 'q' and 'e'
 *@void: Null value
 *
 * Return: Zero value
*/

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
		putchar (i);


	putchar ('\n');

	return (0);
}
