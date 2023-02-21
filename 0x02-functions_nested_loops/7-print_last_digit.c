#include "main.h"
/**
 * print_last_digit - function that calls last digit
 * @c: the number
 * Return: always 0;
 */
int print_last_digit(int c)
{
	int result = c % 10;
	int n = c % 10;

	if (c >= 0)
	{
	_putchar(n + '0');
	}
	else (c < 0)
	{
	c = -1 * c;
	_putchar(n + '0');
	}
	return (result);
}
