#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - it returns the sum of all its parameter
 * @n: parameters returned
 * Return: it returns n.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
        unsigned int m;
        int total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);
	for (m = 0; m < n; m++)
	{
		int i = va_arg(numbers, int);
		total += i;
	}
	va_end(numbers);
	return (total);
}
