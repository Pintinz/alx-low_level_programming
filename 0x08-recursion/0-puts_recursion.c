#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line
 * @s: the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
