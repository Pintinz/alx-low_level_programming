#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 * @str: a point to be pointed
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int length = 0;

	while (str[length])
	{
		length++;
	}

	if (length % 2 != 1)
	{
		n = (length) / 2;
	}

	else
	{
		n = (length - 1) / 2;
	}

	for (; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
