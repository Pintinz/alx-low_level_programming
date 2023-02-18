#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int si = 0;
while (si < 10)
{
putchar('%d', si);
si++;
}
putchar('\n');
return (0);
}
