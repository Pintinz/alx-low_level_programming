#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - a function that prints a character
 * @c: character printed
 * Return: always 1 and &c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
