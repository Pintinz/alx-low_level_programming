#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int i, j, k;
i = 0;
while (i < 8)
{
while (j == i + 1 && j < 9)
{
while (k == j + 1 && k < 10)
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 && j != 8 && k != 9)
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
