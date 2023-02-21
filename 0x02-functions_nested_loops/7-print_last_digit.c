#include "main.h"
/**
 * print_last_digit - function that calls last digit
 * @c: the number
 * Return: always 0;
 */
int print_last_digit(int c)
{
	int i;

	i = c % 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
