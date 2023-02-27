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
	int length_of_the_string = 0;

	while (str[length_of_the_string])
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string - 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}

	for (; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
