#include <stdio.h>

/**
 *main - print each number from 1 to 100
 *multiples of 3 printed Fizz instead
 *multiples of 5 printed Buzz instead
 *etc
 *
 *Return: Null value
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	printf("\n");
	}
	return (0);
}
