#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - a function that prints a character
 * @c: the character printed
 * Return: always 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
