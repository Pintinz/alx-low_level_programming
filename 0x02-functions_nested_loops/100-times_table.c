#include "main.h"
/**
 * print_times_table - function that prints out times table
 * @n: number or lenght of the table
 * Return: Always 0
 */
int print_times_table(int n)
{
	int mul;
	int prod;

	if (n < 0 || n > 15)
	{
		break;
	}
	else
	{
		for (n = 0; n < 15; n++)
		{
			for (mul = 0; mul <= n; mul++)
			{
				prod = mul * n;
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return (0);
}
