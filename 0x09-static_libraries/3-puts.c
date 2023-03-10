#include "main.h"

/**
 * _puts - a function that returns a value
 * @s: the character printed
 * Return: always 0
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	}
}
