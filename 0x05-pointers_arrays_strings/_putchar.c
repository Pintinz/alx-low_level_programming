#include <main.h>

/**
 * _putchar - a function that prints a character
 * @c: thecharacter printed out
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
