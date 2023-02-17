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
putchar(p);
if (p == 'p')
{
p = p + 2;
putchar(p);
}
else if (p == 'd')
{
p = p + 2;
putchar(p);
}
else
{
putchar(p);
p = p + 1;
}
}
return (0);
}
