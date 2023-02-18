#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
int i, j, k;
i = 0;
j = i + 1;
k = j + 1;
while (i < 8)
{
while (j > i)
{
while (k > j)
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
