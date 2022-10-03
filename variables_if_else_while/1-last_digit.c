#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - print the last digit
 * 
 * Return : Zero value
*/
int main(void)
{
	int n, digit;
	digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit); 
	}
	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
        }
	else (digit < 6 && digit != 0)
	{
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
        }	
	return (0);
}
