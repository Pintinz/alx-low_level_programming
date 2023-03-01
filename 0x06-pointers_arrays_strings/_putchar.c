#include "main.h"

/**
 * _putchar - a function that prints characters
 * @c: the character to be printed
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
