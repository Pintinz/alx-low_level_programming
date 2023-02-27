#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: one of the pointer variable
 * @b: the other pointer variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
