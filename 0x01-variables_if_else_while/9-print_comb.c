#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int i = 0;
for (i = 0; i < 10; i++)
{
if (i != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar(i + '0');
}
}
putchar(' ');
return (0);
}
