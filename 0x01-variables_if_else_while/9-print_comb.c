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
if (i == 9)
{
putchar(i + '0');
}
else
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
