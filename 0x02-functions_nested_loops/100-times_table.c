#include "main.h"
/**
 * print_times_table - function that prints out times table
 * @n: number or lenght of the table
 * Return: Always 0
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
	}
	else
	{
		int mult;
		int prod;
		int i;

		for (i = 0; i < n; i++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prod = mult * i;
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
