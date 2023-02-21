#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char print_alphabet = 'a';

	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
		_putchar(print_alphabet);
	_putchar('\n');
}
