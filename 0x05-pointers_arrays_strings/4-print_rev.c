#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * @s: the string to be reversed
 * followed by a new line
 */

void print_rev(char *s)
{
	int length;

	length = 0;

	while (s[length])
	{
		length++;
	}
	
	length--;

	for (; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	
	_putchar('\n');
}
