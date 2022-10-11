#include "main.h"

/**
 *swap_int - swap the value of two int
 *@a: int value to swap
 *@b: int value to swap
 *
 * Return: Null value
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
