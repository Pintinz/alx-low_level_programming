#include "main.h"
#include <stdio.h>
/**
 * _abs - function that calls absolute value.
 * @c: the number.
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = -c;
	}
	return (c);
}
