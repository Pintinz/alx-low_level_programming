#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char p = 'a';
while (p <= 'z')
{
if (p == 'p')
{
p = p + 2;
}
else if (p == 'd')
{
p = p + 2;
}
else
{
putchar(p);
p = p + 1;
}
}
putchar('\n');
return (0);
}
