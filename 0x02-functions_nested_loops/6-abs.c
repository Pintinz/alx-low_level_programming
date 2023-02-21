#include "main.h"
/**
 * _abs - function that calls absolute value.
 * @int: the number to absolute
 * Return: Always 0.
 */
int _abs(int)
{
	int c;

	if (c > 0)
	{
		printf("%d", c);
	}
	else if (c == 0)
	{
		printf("%d", c);
	}
	else if (c < 0)
	{
		int b = -1 * c;

		printf("%d", b);
	}
	return (0);
}
