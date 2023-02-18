#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int single_digit = 0;
while (single_digit < 10)
{
putchar(single_digit);
single_digit++;
}
putchar('\n');
return (0);
}
