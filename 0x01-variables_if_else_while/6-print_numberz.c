#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int num = 0;
for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
