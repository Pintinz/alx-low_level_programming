#include "main.h"

/**
 * _putchar - a function that prints characters
 * @c: the printed character
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
