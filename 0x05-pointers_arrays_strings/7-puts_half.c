#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 * @str
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

	n = (length_of_the_string) / 2;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
