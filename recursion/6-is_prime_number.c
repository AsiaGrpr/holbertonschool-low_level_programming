#include "main.h"

/**
 * prime_recursion - test if a number is a prime number
 * @n: integer to test if is prime
 * @i: integer 2
 * Return: return 1 if prime number else return 0
 */
int prime_recursion(int n, int i)

{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_recursion(n, i - 1));
}

/**
 * is_prime_number - test if the number is a prime number
 * @n: integer to test
 *
 * Return: 1 if success, else return 0
 */
int is_prime_number(int n)

{
	if (n <= 1)
		return (0);
	return (prime_recursion(n, n - 1));
}
