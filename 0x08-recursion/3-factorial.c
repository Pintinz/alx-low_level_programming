#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the given number
 * Return: -1 if n is lower than 0 and 1 when 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
