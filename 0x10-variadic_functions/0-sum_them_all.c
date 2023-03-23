#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - it returns the sum of all its parameter
 * @n: parameters returned
 * Return: it returns n.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list ap;
	int p, i = 0;

	va_start(ap, n);
	for (p = 0; p < n; p++)
	{
		i += va_arg(ap, n);
	}
	va_end(ap);
	putchar('\n');
	return (i);
