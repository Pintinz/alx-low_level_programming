#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
